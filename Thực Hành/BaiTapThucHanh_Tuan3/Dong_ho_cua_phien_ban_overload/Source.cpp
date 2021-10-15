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
		if (this->phut > 60) this->phut %= 60;
		this->giay = this->giay + 60 * this->phut + 3600 * this->gio;
	}
	void operator+(int x) {
		this->giay += x;
	}
	void operator-(int x) {
		this->giay -= x;
	}
	void xuat() {
		this->gio = (this->giay / 3600);
		this->phut = (this->giay % 3600) / 60;
		this->giay= (this->giay % 3600) % 60;
		if (this->gio > 24) this->gio %= 24;
		cout << this->gio << " " << this->phut << " " << this->giay;
	}
	~DongHo(){}
};
int main() {
	int n, x;
	string s;
	DongHo a;
	a.nhap();
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (s == "++") {
			a + 1;
		}
		if (s == "--") {
			a - 1;
		}
		if (s == "+") {
			cin >> x;
			a + x;
		}
		if (s == "-") {
			cin >> x;
			a - x;
		}
	}
	a.xuat();
	return 0;
}