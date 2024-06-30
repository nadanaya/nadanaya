#include <stdio.h>
#include <iostream>
using namespace std;
typedef struct complex {
	double re, im;
	void(*printfun)(struct complex*);
}Complex;
void print_c(struct complex* c) {
	printf("Complex number: %.2f + %.2fi\n", c->re, c->im);

}
Complex *new_complex(double r, double i) {
	Complex* t;
	t = (Complex*)malloc(sizeof(Complex));
	t->re = r;
	t->im = i;
	t->printfun = print_c;
}
int main() {
	Complex* c;
	c = new_complex(1.1, 2.2);
	c->printfun(c);
}
