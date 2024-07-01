#include <iostream>
using namespace std;
class Rectangle {
private:
	int m_height;
public:
	void setHeight(int h) { m_height = h; }
	int getHeight()const { return m_height; }
};
Rectangle r;
int main() {
	r.setHeight(1);
	cout << "높이: " << r.getHeight() << endl;
}
