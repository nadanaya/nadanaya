#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

class Kyochon {
public:
    virtual void make_chicken() {
        cout << "닭을 기름에 넣는다.\n";
        for (int n = 5; n >= 1; n--) {
            cout << "닭을 " << n << "분간 더 튀깁니다.\n";
            std::this_thread::sleep_for(std::chrono::seconds(2));
        }
        cout << "닭이 다 익었습니다." << endl;
    }
    virtual ~Kyochon() = default;
};

class Padak : public Kyochon {
public:
    void make_chicken() override {
        Kyochon::make_chicken();
        cout << "파를 100그램 얹습니다." << endl;
    }
};

int main() {
    Padak p1;
    p1.make_chicken();
    return 0;
}
