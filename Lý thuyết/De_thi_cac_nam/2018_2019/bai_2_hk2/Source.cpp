#include <iostream>
using namespace std;
void checkTime(int &s, int &p, int &h) {
	int t = s + p * 60 + h * 3600;
	h = t / 3600;
	p = t % 3600 / 60;
	s = t % 3600 % 60;
	if (h > 23) {
		h = 0;
	}
	if (p > 59) {
		p = 0;
		h += 1;
	}
	if (s > 59) {
		s = 0;
		p += 1;
		h += 1;
	}
}
class CTime {
private :
	int iHour, iMinute, iSecond;
public:
	CTime() {
		this->iHour = this->iMinute = this->iSecond = 0;
	}
	friend istream& operator>>(istream& is, CTime& a)
	{
		cout << "Nhap gio : "; is >> a.iHour;
		cout << "Nhap phut : "; is >> a.iMinute;
		cout << "Nhap giay : "; is >> a.iSecond;
		return is;
	}
	friend ostream& operator<<(ostream& os, CTime a) {
		os << a.iHour << " h " << a.iMinute << " p " << a.iSecond << " s \n";
		return os;
	}
	void Increased() {
		this->iSecond += 1;
		checkTime(this->iSecond, this->iMinute, this->iHour);
	}
	CTime& operator++() {
		this->Increased();
		return *this;
	}
	CTime operator++(int) {
		CTime a = *this;
		this->Increased();
		return a;
	}
	~CTime() {

	}
};
int main() {
	CTime a;
	cin >> a;
	cout << a;
	cout << "a++ = " << a++;
	cout << "++a = " << ++a;
	cout << "Thoi gian hien tai la: " << a;
	cout << "++a = " << ++a;
	cout << "a++ = " << a++;
	return 0;
}