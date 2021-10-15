#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std;
class Point {
private:
	float x, y;
public:
	Point() {
		this->x = 0;
		this->y = 0;
	}
	Point(float t) {
		this->x = t;
		this->y = 0;
	}
	friend istream& operator>>(istream& is, Point& a) {
		is >> a.x >> a.y;
		return is;
	}
	friend ostream& operator<<(ostream& os, Point a) {
		os << "(" << a.x << " , " << a.y << ")\n";
		return os;
	}
	float getHoangDo() {
		return this->x;
	}
	float getTungDo() {
		return this->y;
	}
	void setHoanhDo(float x) {
		this->x = x;
	}
	void setTungDo(float y) {
		this->y = y;
	}
	Point TinhTienDonGian(int &n, float &k) {
		// theo truc ox -> x thay doi va nguoc lai
		cout << "Nhap n =0 neu tinh tien theo Ox: "; cin >> n;
		cout << "Nhap khoang tinh tien: "; cin >> k;
		if (n == 0) {
			this->x += k;
		}
		else{
			this->y += y;
		}
		return *this;
	}
	Point TinhTienPhucTap(float &goc, float &s) {
		cout << "Nhap goc : "; cin >> goc;
		cout << "Nhap khoang tinh tien: "; cin >> s;
		goc = goc * pi / 180;
		this->y = y + sin(goc) * s;
		this->x = x + cos(goc) * s;
		return *this;
	}
	~Point() {

	}
};
int main() {
	Point a, b;
	int n;
	float k, goc, s;
	cin >> a;
	cin >> b;
	a.TinhTienDonGian(n, k);
	b.TinhTienPhucTap(goc, s);
	cout << a << "\n" << b << "\n";
	return 0;
}
