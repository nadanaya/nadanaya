#include <iostream>
using namespace std;

class Parent {
public: int x;
	  Parent() { x = 11; }
};
class Child : public Parent {
public: int x;
	  Child() { x = 99; }
};
int main() {
	Parent* p = new Parent();
	Child* c = new Child();
	cout << p->x << endl;
	cout << c->x << endl;
	p = c;
	cout << p->x << endl;
}