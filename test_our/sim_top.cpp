#include "Vtop.h"
#include <cstdio>
#include <cstdlib>
#include <cassert>

int main () {
	srand(time(0));
	Vtop* top = new Vtop();
	while (1) {
		int a = rand() & 1, b = rand() & 1;
		top->a = a;
		top->b = b;
		top->eval();
		printf("a = %d, b = %d, f = %d\n", a, b, top->f);
		assert(top->f == (a ^ b));
	}
	delete top;
}
