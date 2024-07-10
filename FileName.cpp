#include <iostream>
using namespace std;

void swap(void* x, void* y, size_t size) {
    char* temp = new char[size];
    memcpy(temp, x, size);
    memcpy(x, y, size);
    memcpy(y, temp, size);
    delete[] temp;
}

int main() {
    int x = 1, y = 2;
    float f1 = 1.234f, f2 = 9.876f;

    swap(&x, &y, sizeof(int));
    swap(&f1, &f2, sizeof(float));

    cout << "Swapped x: " << x << ", y: " << y << endl;
    cout << "Swapped f1: " << f1 << ", f2: " << f2 << endl;

    return 0;
}
