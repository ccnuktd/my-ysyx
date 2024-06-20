TARGET := $(firstword $(MAKECMDGOALS))

TOP = top
TOPSIM = top_sim

ifneq ($(TARGET), sim)
TOPNAME = $(TOP)
CSRCS = $(abspath ./csrc/main.cpp)
else
TOPNAME = $(TOPSIM)
CSRCS = $(abspath ./csrc/main_sim.cpp)
SIMWAVE := $(shell [ -f top_sim.gtkw ] && echo top_sim.gtkw || echo top_sim.vcd)
endif


NXDC_FILES = constr/top.nxdc
INC_PATH ?=
SRC_AUTO_BIND ?=
NVBOARD_ARCHIVE ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD --trace --build --cc --timing\
						-O3 --x-assign fast --x-initial fast --noassert

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/objdir
BIN = $(BUILD_DIR)/$(TOPNAME)
GDB = gdb

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.sv" -or -name "*.v")


ifneq ($(TARGET), sim)
# constraint file
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@

CSRCS += $(SRC_AUTO_BIND)

# rules for NVBOARD
include $(NVBOARD_HOME)/scripts/nvboard.mk
endif


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


run: default
	@./$(BIN)


sim: default
	@./$(BIN)
	$(shell gtkwave $(SIMWAVE))
	
clean:
	rm -rf $(BUILD_DIR)

.PHONY:	default all run sim clean
