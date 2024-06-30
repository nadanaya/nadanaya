#include <stdio.h>
#include <iostream>
using namespace std;
typedef struct shape {
	float width, height;
	float(*area)(struct shape*);

}shape;
float rect_area(struct shape* s) {
	return s->width * s->height;

}
float tri_area(struct shape* s) {
	return (s->width * s-> height)/2;
}
shape* new_triangle(float h, float w) {
	shape* t = (shape*)malloc(sizeof(shape));
	t->height = h;
	t->width = w;
	t->area = tri_area;
	return t;
}
shape* new_rectangle(float h, float w) {
	shape* r = (shape*)malloc(sizeof(shape));
	r->height = h;
	r->width = w;
	r->area = rect_area;
	return r;
}

int main() {
	shape* tri, * rect;
	rect = new_rectangle(2.0, 4.0);
	tri = new_triangle(2.0, 4.0);
	printf("Rectangle Area= %lf\n", rect->area(rect));
	printf("Triangle Area= %lf\n", tri->area(tri));
}
