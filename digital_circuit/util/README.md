# 引脚绑定小工具

### 使用方法

`python3 pin_bind.py example.hyxdc output.xdc`

该指令可以替换的参数为`example.hyxdc`和`putput.xdc`，含义为将`correct.hyxdc`中的脚本代码输出为到`output.xdc`文件中

`output.xdc`文件内容可以直接复制到`Vivado`的XDC文件中使用

该脚本仅针对jyd开发板使用，如需要支持其他开发板则需要修改board文件

### 脚本支持指令

```
x[71:64] (KEY8~KEY1)
x[63:0] (SW64~SW1)

y[71:64] (LED4_CS2, LDE4_CS1, LED3_CS2, LDE3_CS1, LED2_CS2, LDE2_CS1, LED1_CS2, LDE1_CS1)
y[63:56] (LED4_DP, LED4_G~LED4_A)
y[55:48] (LED3_DP, LED3_G~LED3_A)
y[47:40] (LED2_DP, LED2_G~LED2_A)
y[39:32] (LED1_DP, LED1_G~LED1_A)
y[31:0]  (LED32~LED1)

clkp CLKP
clkn CLKN
```

### 指令说明

```python
不带()的语法支持：
x LED14                        # 默认x为位宽为1的信号，x绑定LED14

带()的语法支持：
x[2:0] (SW3, SW2, SW1)           # 将x[2:0]绑定SW3, SW2和SW1
x[5:3] (SW3, SW2, SW1)           # 将x[5:3]绑定SW3, SW2和SW2
x[5:0] (SW6, SW5, LED4~LED1)     # 将x[5:4]绑定SW6和SW5，将x[3:0]绑定LED4~lED1
x (SW3, SW2, SW1)      # 同x[2:0] (SW3, SW2, SW1) ，不建议使用，因为x可能位宽不为3

注意：
1. `x LED14` x和 LED14之间可以有任意空格，LED14以后也可以有空格
2. 如果x指明位宽（及x带[]），则位宽会与后面的信号数量校验，必须两者一致才能过编译
如果x不指明位宽，则默认x[0]绑定最右边的信号，x[1]绑定最右边信号的左边一个，以此类推。不会校验位宽。为了避免错误，建议每一个位宽>1信号都指明位宽。如果为1位宽，建议使用不带括号的版本
3. 带~的语法可以用快捷的方式绑定KEY，SW，LED和LED[1~4]_[A~G]【7段数码管，除外DP和CS1~2】
实例:
(SW3, SW2, SW1)可以简写为(SW3~SW1)
(LED3_G, LED3_F, LED3_E, LED3_D, LED3_C, LED3_B, LED3_A)简写为(LED3_G~LED3_A)
同样顺序也可以从左到右，从小到大:
实例：
(SW1, SW2, SW3)可以简写为(SW1~SW3)
(LED1_A, LED1_B, LED1_C, LED1_D)可以简写为(LED1_A~LED1_D)
```

一个范例：

```hyxdc
x[71:64] (KEY8~KEY1)
x[63:0] (SW64~SW1)

y[71:64] (LED4_CS2, LDE4_CS1, LED3_CS2, LDE3_CS1, LED2_CS2, LDE2_CS1, LED1_CS2, LDE1_CS1)
y[63:56] (LED4_DP, LED4_G~LED4_A)
y[55:48] (LED3_DP, LED3_G~LED3_A)
y[47:40] (LED2_DP, LED2_G~LED2_A)
y[39:32] (LED1_DP, LED1_G~LED1_A)
y[31:0] (LED32~LED1)
```

