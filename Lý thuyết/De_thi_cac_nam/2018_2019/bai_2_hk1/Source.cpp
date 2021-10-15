#include <iostream>
using namespace std;
int checkNam(int y)
{
	if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {
		return 1;
	}
	return 0;
}
void checkNgay(int &d, int &m, int &y)
{
	switch (m) {
	case 1: case 3:case 5: case 7: case 8: case 10:
		if(d > 31) {
			d = 1;
			m += 1;
		}
		break;
	case 4: case 6: case 9: case 11:
		if (d > 30) {
			d = 1;
			m += 1;
		}
		break;
	case 2:
		if (checkNam(y) == 1) {
			if (d > 29) {
				d = 1;
				m += 1;
			}
			else {
				if (d > 28) {
					d = 1;
					m += 1;
				}
			}
			break;
		}
	case 12:
		if (d > 31) {
			d = 1;
			m = 1;
			y += 1;
		}
		break;
	}
}
class CDate
{
private:
	int iNgay, iThang,iNam;
public:
	CDate()
	{
		this->iNgay = this->iThang = this->iNam = 0;
	}
	friend istream& operator>>(istream& is, CDate& a) {
		cout << "Nhap ngay: "; is >> a.iNgay;
		cout << "Nhap thangs: "; is >> a.iThang;
		cout << "Nhap nam: "; is >> a.iNam;
		return is;
	}
	void Increased() {
		this->iNgay += 1;
		checkNgay(this->iNgay, this->iThang, this->iNam);
	}
	CDate& operator++() {
		//++a
		this->Increased();;
		return *this;
	}
	CDate operator++(int) {
		CDate a = *this;
		this->Increased();
		return a;
	}
	friend ostream& operator<<(ostream& os, CDate a) {
		os << a.iNgay << " / " << a.iThang << " / " << a.iNam << "\n";
		return os;
	}
	~CDate() {

	}
};
int main() {
	CDate a;
	cin >> a;
	cout << a;
	cout << "a++ = " << a++;
	cout << "++a = " << ++a;
	cout << "Vay luc nay a = " << a;
	cout << "++a = " << ++a;
	cout << "a++ = " << a++;
	return 0;
}