#include <iostream>
#include <math.h>
using namespace std;
class date {
private:
	int ngay, thang, nam;
public:
	date() {
		this->ngay = 0;
		this->thang = 0;
		this->nam = 0;
	}
	int NamNhuan(int nam) {
		if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
			return 1;
		return 0;
	}
	int Thang(int thang, int nam) {
		int ngay_thang[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
		if (NamNhuan(nam) == 1)
			ngay_thang[2 - 1] = 29;
		return ngay_thang[thang - 1];
	}
	void nhap() {
		cin >> this->ngay >> this->thang >> this->nam;
		this->ngay = abs(this->ngay);
		this->thang = abs(this->thang);
		this->nam = abs(this->nam);
		this->thang = (this->thang) % 12;
		if (this->thang == 0) this->thang = 12;
		if (this->ngay > Thang(this->thang, this->nam))
		{
			this->ngay = 1;
		}
	}
	void operator+(int x) {
		this->ngay += x;
	}
	void operator-(int x) {
		this->ngay -= x;
	}
	int change() {
		int s = 0;
		for (int i = 0; i < this->nam; i++) {
			if (NamNhuan(this->nam) == 1) s += 366;
			else s += 365;
		}
		for (int i = 0; i < this->thang; i++) {
			s += Thang(i, this->nam);
		}
		s += this->ngay;
		return s;
	}
	int xuatKhoangCachNgay(date b) {
		int m = this->change();
		int n = b.change();
		return abs(m - n);
	}
};
int main() {
	int n, x;
	date a, b;
	a.nhap();
	do {
		cin >> n;
		switch (n)
		{
		case 1:
			cin >> x;
			a + x;
			break;
		case 2:
			cin >> x;
			a - x;
			break;
		case 3:
			b.nhap();
			cout << a.xuatKhoangCachNgay(b) << endl;
			break;
		}
	} while (n != 3);
	return 0;
}