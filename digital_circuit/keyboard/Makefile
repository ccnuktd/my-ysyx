# use to sim
# TOPNAME = keyboard_sim
# use to top
TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --trace --build -cc --timing\
						-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/objdir
BIN = $(BUILD_DIR)/$(TOPNAME)
GDB = gdb

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.sv" -or -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.cpp" -or -name "*.c")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBOARD
include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CXXFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CXXFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

run: CXXFLAGS += -DNVBOARD
run: default
	@./$(BIN)

sim: default
	@./$(BIN)
	
debug: CXXFLAGS += -g
debug: default
	

clean:
	rm -rf $(BUILD_DIR)

.PHONY:	default all run sim debug clean
