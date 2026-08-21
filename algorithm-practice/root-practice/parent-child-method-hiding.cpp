#include <iostream>
using namespace std;
class Parent {
public:
	void example() {
		cout << "Parent" << endl;
	}
};
class Child : public Parent {
public:
	void example() { cout << "Child" << endl; }
};
void main() {
	Parent* p = new Parent();
	p->example();

	Child* c = new Child();
	c->example();

	p = c;
	p->example();
}