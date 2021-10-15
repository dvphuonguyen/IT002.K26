#include "SoAo.h"
int main() {
	SoAo a, b;
	a.Nhap();
	a.Xuat();
	b.Nhap();
	b.Xuat();
	a.Sum(b);
	return 0;
}