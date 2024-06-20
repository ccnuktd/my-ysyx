#include <nvboard.h>
#include <Vtop.h>
#include "verilated_vcd_c.h"
#include "verilated.h"

static VerilatedVcdC* fp;
static VerilatedContext* ctx;
static Vtop* dut;

void nvboard_bind_all_pins(Vtop* top);


void single_cycle() {
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
}

void reset(int n) {
    dut->rst = 1;
    while (n -- > 0) single_cycle();
    dut->rst = 0;
}

int main() {
    ctx = new VerilatedContext();
    dut = new Vtop{ctx};
    
    nvboard_bind_all_pins(dut);
    nvboard_init();

    // reset(10);

    while (1) {
		nvboard_update();
        single_cycle();
	}  
    return 0;

}