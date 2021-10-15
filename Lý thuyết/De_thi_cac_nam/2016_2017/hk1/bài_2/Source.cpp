#include <iostream>
#include <algorithm>
using namespace std;
class PhanSo {
private:
	int TuSo, MauSo;
public:
	PhanSo() {
		this->TuSo = 0;
		this->MauSo = 1;
	}
	PhanSo(int x, int y) {
		this->TuSo = x;
		this->MauSo = y;
	}
	PhanSo(int x) {
		this->TuSo = x;
		this->MauSo = 1;
	}
	PhanSo operator+(PhanSo a) {
		PhanSo b;
		b.TuSo = this->TuSo * a.MauSo + this->MauSo * a.TuSo;
		b.MauSo = this->MauSo * a.MauSo;
		int t= abs(b.TuSo);
		int m = abs(b.MauSo);
		int k;
		if (t == 0 || m == 0) {
			k = t +m;
		}
		else {
			while (t != m) {
				if( t > m) t -= m;
				else if (m > t) m -= t;
			}
			k = t;
		}
		b.TuSo /= k;
		b.MauSo /= k;
		return b;
	}
	void Xuat() {
		cout << this->TuSo << " / " << this->MauSo << "\n";
	}
};
int main() {
	PhanSo a;
	PhanSo b(1, 2);
	PhanSo c(3);
	a = b + c;
	a.Xuat();
	return 0;
}
