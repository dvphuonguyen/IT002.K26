#include <iostream>
using namespace std;
class point {
private:
	float x;
	float y;
public:
	void nhap();
	void xuat();
	void _1();
	void _2();
	void _3(int& ,int& );
	void setX(float x) {
		this->x = x;
	}
	void setY(float y) {
		this->y = y;
	}
};
void point::nhap() {
	cin >> this->x >> this->y;
}
void point::xuat() {
	cout << "(" << this->x << "," << this->y << ")";
}
void point::_1() {
	setX(this->x * 2);
	setY(this->y * 2);
}
void point::_2() {
	setX(0);
	setY(0);
}
void point::_3(int& o, int &d) {
	cin >> o >> d;
	if (o == 0) {
		setX(this->x + d);
	}
	else {
		setY(this->y + d);
	}
}
int main() {
	point a;
	a.nhap();
	int o, d;
	int n, m;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> m;
		if (m == 1) a._1();
		if (m == 2) a._2();
		if (m == 3) a._3(o, d);
	} 
	a.xuat();
	return 0;
}