#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	if (a == 0 || b == 0) return a + b;
	if (a == b) return a;
	else {
		while (a != b)
		{
			if (a > b) a = a - b;
			else b = b - a;
		}
		return a;
	}
}
class PhanSo
{
private:
	int TuSo, MauSo;
public:
	PhanSo()
	{
		this->TuSo = this->MauSo = 0;
	}
	friend istream& operator>>(istream& is, PhanSo& a)
	{
		is >> a.TuSo >> a.MauSo;
		return is;
	}
	friend ostream& operator<<(ostream& os, PhanSo a)
	{
		os << a.TuSo << "/" << a.MauSo;
		return os;
	}
	PhanSo operator+(PhanSo a)
	{
		PhanSo b;
		b.TuSo = this->TuSo * a.MauSo + this->MauSo * a.TuSo;
		b.MauSo = this->MauSo * a.MauSo;
		int t = UCLN(b.TuSo, b.MauSo);
		b.TuSo /= t;
		b.MauSo /= t;
		return b;
	}
	PhanSo operator-(PhanSo a)
	{
		PhanSo b;
		b.TuSo = this->TuSo * a.MauSo - this->MauSo * a.TuSo;
		b.MauSo = this->MauSo * a.MauSo;
		int t = UCLN(b.TuSo, b.MauSo);
		b.TuSo /= t;
		b.MauSo /= t;
		return b;
	}
	~PhanSo()
	{

	}
};
int main()
{
	PhanSo a, b;
	cin >> a >> b;
	cout << a << "\n";
	cout << b << "\n";
	cout << "Hieu: " << a - b << "\n";
	cout << "Tong : " << a + b << "\n";
	
	return 0;
}