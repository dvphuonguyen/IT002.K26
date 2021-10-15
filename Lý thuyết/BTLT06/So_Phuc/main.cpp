#include"SoPhuc.h"
int main() {
	SoPhuc a, b, c, d, e, f;
	a.nhap();
	b.nhap();
	c = a + b;
	c.xuat(); cout << endl;
	d = a - b;
	d.xuat(); cout << endl;
	if (c >= d) {
		c.xuat(); cout << " >= "; d.xuat(); cout << endl;
	}
	else {
		c.xuat(); cout << " < "; d.xuat(); cout << endl;
	}
	e = 7 + a;
	e.xuat(); cout << endl;
	f = b - 8;
	f.xuat(); cout << endl;
	return 0;
}