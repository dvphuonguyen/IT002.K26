#include <iostream>
using namespace std;
int checkYear(int y) {
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
		return 1;
	}
	return 0;
}
void checkDate(int &d, int &m, int &y) {
	switch (m) {
	case 1: case 3: case 5: case 7: case 8: case 10: 
		if (d > 31) {
			d = 1;
			m += 1;
		}
		break;
	case 4:case 6:case 9:case 11:
		if (d > 30) {
			d = 1;
			m += 1;
		}
		break;
	case 2:
		if (checkYear(y) == 1) {
			if (d > 29) {
				d = 1;
				m += 1;
			}
		}
		else {
			if (d > 28) {
				d = 1;
				m += 1;
			}
		}
	case 12:
		if (d > 31) {
			m = 1;
			d = 1;
			y += 1;
		}
	}
}
class cDate {
private:
	int iDay, iMonth, iYear;
public:
	cDate() {
		this->iDay = this->iMonth = this->iYear = 0;
	}
	friend istream& operator>> (istream& is, cDate& a) {
		cout << "Nhap ngay: "; is >> a.iDay;
		cout << "Nhap thang: "; is >> a.iMonth;
		cout << "Nhap nam: "; is >> a.iYear;
		return is;
	}
	void Sum_one_day() {
		this->iDay += 1;
	}
	cDate& operator++() {
		this->Sum_one_day();
		checkDate(this->iDay, this->iMonth, this->iYear);
		return *this;
	}
	cDate operator++(int) {
		cDate a;
		a = *this;
		this->Sum_one_day();
		checkDate(this->iDay, this->iMonth, this->iYear);
		return a;
	}
	friend ostream& operator<<(ostream& os, cDate a) {
		os << a.iDay << " / " << a.iMonth << " / " << a.iYear << "\n";
		return os;
	}
	~cDate() {

	}
};
int main() {
	cDate a;
	cin >> a;
	cout << a;
	cout << "++a = " << ++a;
	cout << "a++ = " << a++;
	cout << "Ngay hien tai la:" << a;
	cout << "a++ = " << a++;
	cout << "++a = " << ++a;
	return 0;
}