#include <iostream>
using namespace std;
class Animal {
public:
	virtual void monya() { cout << "����!\n"; }
	void whatRU() { cout << "An animal!\n"; }

};
class Dog :public Animal {
public:
	virtual void monya() { cout << "�۸���!\n"; }
	void whatRU() { cout << "A Dog!\n"; }
};
void main() {
	Animal* ap; Animal a2;
	Dog* fido = new Dog(); Dog doggy;
	ap = fido; 
	a2 = doggy;
	fido->monya();
	fido->whatRU();
	ap->monya();
	ap->whatRU();
	a2.monya();
	a2.whatRU();
}