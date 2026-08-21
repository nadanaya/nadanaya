#include <iostream>
using namespace std;

class Figure {
protected:
    int width, height;
public:
    void setsize(int w, int h) {
        width = w;
        height = h;
    }
    virtual int area() = 0; // Must be overridden, even if not used
};

class Rectangle : public Figure {
public:
    int area() override {
        return width * height;
    }
};

int main() {
    Figure* f = new Rectangle();
    f->setsize(2, 3);
    cout << "Rectangle area: " << f->area() << endl;
    delete f; // Clean up memory
    return 0;
}
