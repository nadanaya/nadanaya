#include <iostream>
using namespace std;
class Rectangle {
private:
	float height, width;
public:
	void setDimensions(float h, float w) {
		height = h;
		width = w;
	}

	float get_area()
	{
		return this->height * this->width;
	}
};
int main() {
	Rectangle r;
	r.setDimensions(5.0, 3.0);  // 높이와 너비를 설정
	cout << "사각형의 면적: " << r.get_area() << endl;  // 면적 출력
	return 0;
}
