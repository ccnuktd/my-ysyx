import sys

class BoardDescParser():
  def __init__(self):
    # 用来存储名称和引脚，如 {LED1: A13}
    self.pins = {}
  
  def parseLine(self, lid, lineseg):
    hwname = lineseg[0].strip()
    pin = lineseg[1].strip()

    self.pins[hwname] = pin

  def parseFile(self, path):
    self.pins = {}
    with open(path, "r") as f:
      for i, line in enumerate(f):
          # 注释的处理
          if '#' in line:
            line = line[:line.find('#')]
          line = line.strip()

          # 去除空行
          if line == '':
            continue
          
          lineseg = line.split('\t')
          # 连续的\t的处理
          lineseg = [item for item in lineseg if item != ""]

          # print(lineseg)
          if len(lineseg) == 2:
            self.parseLine(i, lineseg)
          else:
            print(f"board Line {i}: Error Invalid line \" {line} \"")
            exit(-1)

  def checkPinValid(self, pin):
    return pin in self.pins

  def queryPin(self, pin):
    return self.pins[pin]

class HyxdcParser():
  def __init__(self):
    self.signal_bit = []
    self.pins = []

  def parseLine(self, lid, line):
    # print(f"{lid}: {line}")
    # 找到信号和pins
    signal, pins = "", ""
    if ' (' in line and line.endswith(')'):
      signal = line[:line.find('(')].strip()
      pins = [u.strip() for u in line[line.find('(')+1:-1].split(',') if u.strip() != '']
    elif ' ' in line:
      signal = line[:line.find(' ')].strip()
      pins = [line[line.find(' ')+1:].strip()]
    else:
      print(f"Line {lid+1}: Error: Invalid format \" {line} \"")
      exit(1)
    
    # print(f"signal: {signal}")
    # print(f"pins: {pins}")

    signal_name = ""
    nowidth = 0
    # 获取信号的位宽
    if '[' in signal and ']' in signal:
      try:
        signal_name = signal[:signal.find('[')]
        colon = signal.find(':')
        if colon != -1:
          # 多位赋值
          msb = int(signal[signal.find('[')+1:colon].split()[0])
          lsb = int(signal[colon+1:signal.find(']')].split()[0])
          # print(signal, ":", msb, " ", lsb)
          if msb < lsb:
            print(f"Line {lid+1}: Error: left width must bigger than right \" {line} \"")
            exit(1)
          else:
            for i in range(msb, lsb - 1, -1):
              self.signal_bit.append(signal_name + '[' + str(i)  + ']')
        else:
          # 单位赋值
          bit = int(signal[signal.find('[')+1:signal:find(']')].split()[0])
          self.signal_bit.append(signal_name + '[' +  str(bit) + ']')

      except ValueError:
        print(f"Line {lid+1}: Error: Invalid bit width \" {line} \"")
        exit(1)
    else:
      # 没有指明位宽
      signal_name = signal
      nowidth = 1
    
    # print(f"self.signal_bit: {self.signal_bit}")

    pins_size = 0
    # 解析pins内容
    for pin in pins:
      if pin.find('~') != -1:
        left_pin = pin[:pin.find('~')]
        right_pin = pin[pin.find('~')+1:]
        # 由于board能出现的最大数字为64,因此直接取pin的最后两位来处理
        left_stuff, left_name = left_pin[-2:], left_pin[:-2] 
        if left_pin[-2].isdigit() == False:
          left_stuff, left_name = left_pin[-1], left_pin[:-1]
        
        right_stuff, right_name = right_pin[-2:], right_pin[:-2]
        if right_pin[-2].isdigit() == False:
          right_stuff, right_name = right_pin[-1], right_pin[:-1]
        
        # print(left_name, " ", left_stuff)
        # print(right_name, " ", right_stuff)

        if left_name != right_name:
          print(f"Line {lid+1}: Error: Invaild usage ~\n {left_name}{left_stuff}~{right_name}{right_stuff}")
          exit(1)
        
        if len(left_stuff) == 1 and left_stuff >= 'A' and left_stuff <= 'G' and len(right_stuff) == 1 and right_stuff >= 'A' and right_stuff <= 'G':
          # 字母的处理
          if left_stuff > right_stuff:
            for char_code in range(ord(left_stuff), ord(right_stuff)-1, -1):
              self.pins.append(left_name + chr(char_code))
              pins_size += 1
          else:
            for char_code in range(ord(left_stuff), ord(right_stuff)+1):
              self.pins.append(left_name + chr(char_code))
              pins_size += 1
          
        else:
          # 数字的处理
          try:
            left_num = int(left_stuff)
            right_num = int(right_stuff)

            if left_num > right_num:
              for i in range(left_num, right_num-1, -1):
                self.pins.append(left_name + str(i))
                pins_size += 1
            else:
              for i in range(left_num, right_num+1, 1):
                self.pins.append(left_name + str(i))
                pins_size += 1

          except ValueError:
            if left_name != right_name:
              print(f"Line {lid+1}: Error: Invaild usage ~\n {left_name}{left_stuff}~{right_name}{right_stuff}")
              exit(1)
      else:
        self.pins.append(pin)
        pins_size += 1
        

    # 检查pins个数是否和位宽相等
    if nowidth == 1:
      # 没有指明位宽则不进行校验，直接将pins数量接入信号
      if pins_size == 1:
        self.signal_bit.append(signal_name)
      else:
        for i in range(pins_size - 1, -1, -1):
          self.signal_bit.append(signal_name + '[' + str(i)  + ']')
    else:
      if len(self.signal_bit) != len(self.pins):
        print(f"Line {lid+1}: Error: signal bit is not equal to pin count \" {line} \"")
    
    # print(f"self.signal_bit: {self.signal_bit}")
    # print(f"self.pins: {self.pins}")
    # print()

  def parseFile(self, path):
    cons_f = open(path, "r")

    for i, line in enumerate(cons_f):
      # 注释的处理
      if '#' in line:
        line = line[:line.find('#')]
      line = line.strip()

      # 去除空行
      if line == '':
        continue
  
      if ' (' in line or ')' in line or ' ' in line:
        self.parseLine(i, line)
      else:
        pass
  
  def get_signal(self):
      return self.signal_bit

  def get_pins(self):
      return self.pins

def print_usage():
  print("Usage: python3 pin_bind.py constraint_file_path output_file_path")


if __name__ == "__main__":
  if len(sys.argv) != 3:
    print("Error: Bad command line arguments")
    print_usage()
    exit(-1)
  
  cons_path = sys.argv[1]
  output_path = sys.argv[2]
  boardfile_path = "./board"

  board = BoardDescParser()
  board.parseFile(boardfile_path)

  constr = HyxdcParser()
  constr.parseFile(cons_path)

  pins = constr.get_pins()
  signals = constr.get_signal()

  print(f"pins: {pins}")
  print(f"signals: {signals}")

  if len(signals) != len(set(signals)):
    print(f"Error: {cons_path} has duplicate signal")
    exit(1)

  if len(pins) != len(set(pins)):
    print(f"Error: {cons_path} has diplicate pins")
    exit(1)
 
  with open(output_path, "w") as f:
    for i in range(len(signals)):
      pin = pins[i]
      if board.checkPinValid(pin) == False:
        print(f"Error: {pin} is not exist")
        exit(1)

      signal = signals[i]
      
      # 需要对于clk_p/n区别对待
      if board.queryPin(pin) == 'AD12' or  board.queryPin(pin) == 'AD11':
        f.write(f"set_property PACKAGE_PIN {board.queryPin(pin)} [get_ports {{ {signal} }}]\n")
        f.write(f"set_property IOSTANDARD DIFF_HSTL_II_18 [get_ports {{ {signal} }}]\n")
      else:
        f.write(f"set_property PACKAGE_PIN {board.queryPin(pin)} [get_ports {{ {signal} }}]\n")
        f.write(f"set_property IOSTANDARD LVCMOS18 [get_ports {{ {signal} }}]\n")
      # print(f"set_property PACKAGE_PIN {board.queryPin(pin)} [get_ports {{ {signal} }}]")
      # print(f"set_property IOSTANDARD LVCMOS18 [get_ports {{ {signal} }}]")
