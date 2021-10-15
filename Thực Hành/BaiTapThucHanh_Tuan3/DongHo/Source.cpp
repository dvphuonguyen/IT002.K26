#include <iostream>
#include <math.h>
using namespace std;
class DongHo {
private:
	int gio, phut, giay;
public:
	DongHo() {
		this->gio = 0;
		this->phut = 0;
		this->giay = 0;
	}
	void nhap() {
		cin >> this->gio >> this->phut >> this->giay;
		if (this->gio < 0) this->gio = abs(this->gio);
		if (this->phut < 0) this->phut = abs(this->phut);
		if (this->giay < 0) this->giay = abs(this->giay);
		if (this->gio > 24) this->gio %= 24;
		if (this->phut > 24) this->phut %= 60;
		this->giay = this->giay + this->phut * 60 + this->gio * 3600;
	}
	void cong(int x) {
		this->giay += x;
	}
	void hieu(int x) {
		this->giay -= x;
	}
	void xuat() {
		this->gio = this->giay / 3600;
		this->phut = (this->giay % 3600) / 60;
		this->giay = (this->giay % 3600) % 60;
		if (this->gio > 24) this->gio %= 24;
		cout << this->gio << "h " << this->phut << "p " << this->giay << "s";
	}
	~DongHo() {
	}
};
int main() {
	DongHo a;
	a.nhap();
	int n, x;
	do {
		cin >> n;
		switch (n) {
		case 1:
			a.cong(1);
			break;
		case 2:
			a.hieu(1);
			break;
		case 3:
			cin >> x;
			a.cong(x);
			break;
		case 4:
			cin >> x;
			a.hieu(x);
			break;
		}
	} while (n != -1);
	a.xuat();
	return 0;
}