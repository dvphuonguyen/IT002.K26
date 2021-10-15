#include"DaThuc.h"
int main() {
	DaThuc a, b, c, d;
	a.nhap();
	a.xuat(); cout << "\n\n";
	b.nhap();
	b.xuat(); cout << "\n\n";
	cout << "Tong hay da thuc la: " << endl;
	c = a + b;
	c.xuat(); cout << "\n\n";
	cout << "Hieu hay da thuc la: " << endl;
	d = a - b;
	d.xuat(); cout << "\n\n";
	if (c != d) {
		cout << "Hai da thuc tong va hieu kkhac nhau" << endl;
	}
	else {
		cout << "<Hai da thuc tong va hieu bang nhau" << endl;
	}
	float x;
	cout << "\nNhap gia tri x = "; cin >> x;
	cout << "Tai x = " << x << " thi : " << endl;
	cout << "Bieu thuc A = "; a.xuat();
	cout << " = " << a.The_Gia_Tri(x) << "\n\n";
	cout << "Bieu thuc B = "; b.xuat();
	cout << " = " << b.The_Gia_Tri(x) << "\n\n";
	cout << "Bieu thuc C = "; c.xuat();
	cout <<  "= " << c.The_Gia_Tri(x) << "\n\n";
	cout << "Bieu thuc D = "; d.xuat();
	cout << " = " << d.The_Gia_Tri(x) << "\n\n";
	return 0;
}