#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

class Kyochon {
public:
    virtual void make_chicken() {
        cout << "���� �⸧�� �ִ´�.\n";
        for (int n = 5; n >= 1; n--) {
            cout << "���� " << n << "�а� �� Ƣ��ϴ�.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
        cout << "���� �� �;����ϴ�." << endl;
    }
    virtual ~Kyochon() = default;
};

class Padak : public Kyochon {
public:
    void make_chicken() override {
        Kyochon::make_chicken();
        cout << "�ĸ� 100�׷� ����ϴ�." << endl;
    }
};

int main() {
    Padak p1;
    p1.make_chicken();
    return 0;
}
