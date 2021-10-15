#include <iostream>
#include <math.h>
using namespace std;
class point {
private: 
	float x;
	float y;
public:
	friend class polygon;
	void nhap() {
		cin >> this->x >> this->y;
	}
	float getX() {
		return this->x;
	}
	float getY() {
		return this->y;
	}

};
class polygon {
private:
	int n;
	point* a;
public:
	void input() {
		cin >> n;
		a = new point[n];
		for (int i = 0; i < n; i++) {
			a[i].nhap();
		}
	}
	int getN() {
		return this->n;
	}
	float dien_tich_da_giac() {
		float s = 0;
		int j = n - 1;
		for (int i = 0; i < n; i++) {
			s += (a[j].x + a[i].x) * (a[j].y - a[i].y);
			j = i;
		}
		s = abs(s / 2);
		return s;
	}
};
int main() {
	polygon b;
	b.input();
	cout << b.dien_tich_da_giac();
	return 0;
}
