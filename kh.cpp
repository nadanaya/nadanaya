#include <iostream>
using namespace std;

class Figure {
protected:
    int width;
    int height;
public:
    void setsize(int w, int h) { width = w; height = h; }
    virtual int area() = 0; // Pure virtual function makes Figure an abstract class
};

class Rectangle : public Figure {
public:
    int area() override { return width * height; }
};

class Triangle : public Figure {
public:
    int area() override { return (double)(width * height) / 2 ;
}
};

int main() {
    Figure* all[2];
    int type;
    int width, height;

    cout << "Ÿ�԰� �ʺ�, ���̸� �Է��ϼ��� (0 �ﰢ��, 1 �簢��): ";
    cin >> type >> width >> height;

    if (type == 0) {
        all[0] = new Triangle();
        all[0]->setsize(width, height);
        cout << "�ﰢ���� ������ " << all[0]->area() << endl;
        delete all[0]; // Clean up memory
    }
    else if (type == 1) {
        all[1] = new Rectangle();
        all[1]->setsize(width, height);
        cout << "�簢���� ������ " << all[1]->area() << endl;
        delete all[1]; // Clean up memory
    }
    else {
        cout << "�߸��� Ÿ�� �Է��Դϴ�." << endl;
    }

    return 0;
}
