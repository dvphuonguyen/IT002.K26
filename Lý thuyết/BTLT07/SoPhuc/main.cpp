#include "SoPhuc.h"
int main() {
	SoPhuc a, b;
	SoPhuc c;
	cout << "Nhap so phuc a: " << endl;
	cin >> a;
	cout << "Nhap so phuc b: " << endl;
	cin >> b;
	c = a + b;
	cout << "Tong cua so phuc a va b la : " << endl;
	cout << c;
	c = a - b;
	cout << "\nHieu cua so phuc a va b la : " << endl;
	cout << c;
	c = a;
	cout << "\nGan c = a la : " << endl;
	cout << c << "\n";
	cout << "++a = " << "\t" << ++a << "\n";
	cout << "--a = " << "\t" << --a << "\n";
	cout << "c = a++ = " << "\t" << a++ << "\n";
	cout << "c = a-- = " << "\t" << a-- << "\n";
	return 0;
}