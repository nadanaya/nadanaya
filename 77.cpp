#include <stdio.h>
#include <iostream>
using namespace std;
typedef struct complex {
	double re, im;
	void(*printfun)(struct complex*);

}Complex;
void print_c(struct complex* p)
{
	printf("%3.1f + %3.1fi\n", p->re, p->im);
}
int main() {
	Complex* cp;
	cp = (complex*)malloc(sizeof(Complex));
	cp->printfun = print_c;
	cp->re = 1.1; cp->im = 2.2;
	cp->printfun(cp);
}
