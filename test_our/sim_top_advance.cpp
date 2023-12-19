#include "verilated.h"
#include "Vtop.h"
#include "cstdio"
#include "cstdlib"
#include "cassert"

#ifdef VM_TRACE
#include "verilated_vcd_c.h"
static VerilatedVcdC* fp;
#endif

static Vtop* top;

void test(int time, int a, int b) {
	top->a = a;
	top->b = b;
	top->eval();
	assert(top->f == a ^ b);
		
#ifdef VM_TRACE
	fp->dump(time);	
#endif
}

int main() {
	top = new Vtop();

#ifdef VM_TRACE
	Verilated::traceEverOn(true);
	printf("Enable waves ...\n");
	fp = new VerilatedVcdC();
	top->trace(fp, 0);
	fp->open("dump.vcd");
#endif

	int cycle = 0;
	printf("Enter the test cycle:\t");
	int ret =	scanf("%d", &cycle);
	for (int i = 0; i < cycle; i ++){
		test(i, i / 2 % 2, i % 2);
	} 

#ifdef VM_TRACE
	fp->close();
	delete fp;
#endif
	delete top;
	return 0;
}
