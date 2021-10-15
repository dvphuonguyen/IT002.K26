#include <iostream>
using namespace std;
class cNgay {
private:
	int d, m, y;
public:
	cNgay() {
		this->d = this->m = this->y = 1;
	}
	cNgay(int nam, int thang) {
		this->d = 1;
		this->m = thang;
		this->y = nam;
	}
	cNgay(int nam, int thang, int ngay) {
		this->d = ngay;
		this->m = thang;
		this->y = nam;
	}
	friend istream& operator>>(istream& is, cNgay& a) {
		cout << "Ngap ngay: "; is >> a.d;
		cout << "Nhap thang: "; is >> a.m;
		cout << "Nhap nam: "; is >> a.y;
		return is;
	}
	friend ostream& operator<<(ostream& os, cNgay a) {
		os << a.d << " / " << a.m << " / " << a.y << "\n";
		return os;
	}
	bool operator<(cNgay a) {
		int s = this->d + this->m * 30 + this->y * 365;
		int r = a.d + a.m * 30 + a.y * 365;
		if (s < r) return true;
		return false;
	}
};
int main()
{
	cNgay ng1;
	cNgay ng2(2017, 1);
	cNgay ng3(2017, 1, 7);
	cout << ng1;
	cout << ng2;
	cout << ng3;
	cin >> ng1;
	cout << ng1;
	if (ng1 < ng2) cout << "Ngay 1 truoc ngay 2\n";
	else cout << "Ngay 1 khong truoc ngay 2\n";
	return 0;
}