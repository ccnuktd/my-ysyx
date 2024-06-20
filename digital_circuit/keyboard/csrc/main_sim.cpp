#include <Vtop_sim.h>
#include "verilated_vcd_c.h"
#include "verilated.h"

static VerilatedVcdC* fp;
static VerilatedContext* ctx;
static Vtop_sim* dut;


int main() {
    ctx = new VerilatedContext();
    dut = new Vtop_sim{ctx};


    Verilated::traceEverOn(true);
	printf("Enable waves ...\n");
	fp = new VerilatedVcdC();
	dut->trace(fp, 99);
	fp->open("top_sim.vcd");

    while (~ctx->gotFinish() && dut->done == 0 && ctx->time() < 100000) {
        dut->eval();
        fp->dump(ctx->time());
        ctx->timeInc(1);
    }

    delete dut;
    fp->close();
	delete fp;
}