#include <iostream>
#include <windows.h>
using namespace std;

class Kyochon {
public:
	void make_chicken() {
		int n;
		cout << "���� �⸧�� �ִ´�.\n";
		for (n = 5; n >= 1; n--) {
			cout << "����" << n << "�а� �� Ƣ��ϴ�.\n";
			Sleep(2000);
		}
		cout << "���� �� �;����ϴ�." << endl;

	}
};
int main() {
	Padak p1;
	p1.make_chicken();
}
class Padak: public Kyochon {
public:
	void make_chicken() {
		Kyochon::make_chicken();
		cout << "�ĸ� 100�׷� ����ϴ�." << endl;
	}
};