#include <nvboard.h>
#include <Vtop.h>
#include "verilated_vcd_c.h"
#include "verilated.h"

static VerilatedVcdC* fp;
static VerilatedContext* ctx;
static Vtop* dut;

#ifdef NVBOARD
void nvboard_bind_all_pins(Vtop* top);
#endif

void single_cycle() {
    dut->clk = 0; dut->eval();
    dut->clk = 1; dut->eval();
}

void reset(int n) {
    dut->rst_n = 0;
    while (n -- > 0) single_cycle();
    dut->rst_n = 1;
}

int main() {
    ctx = new VerilatedContext();
    dut = new Vtop{ctx};

#ifdef NVBOARD
    nvboard_bind_all_pins(dut);
    nvboard_init();

    reset(10);

    while (1) {
		nvboard_update();
        single_cycle();
	}  
    return 0;
#else
    Verilated::traceEverOn(true);
	printf("Enable waves ...\n");
	fp = new VerilatedVcdC();
	dut->trace(fp, 99);
	fp->open("dump.vcd");

    while (~ctx->gotFinish() && dut->done == 0 && ctx->time() < 100000) {
        dut->eval();
        fp->dump(ctx->time());
        ctx->timeInc(1);
    }

    delete dut;
    fp->close();
	delete fp;
#endif
}