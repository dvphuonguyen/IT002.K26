#pragma once
#include <iostream>
using namespace std;
class PhanSo
{
private:
	int iTuSo;
	int iMauSo;
public:
	PhanSo();
	PhanSo(int x);
	friend istream& operator>>(istream& is, PhanSo& a) {
		is >> a.iTuSo >> a.iMauSo;
		return is;
	}
	friend ostream& operator<<(ostream& os, PhanSo a) {
		os << a.iTuSo << "/" << a.iMauSo << endl;
		return os;
	}
	int getTuSo() {
		return this->iTuSo;
	}
	int getMauSo() {
		return this->iMauSo;
	}
	void setTuSo(int tu) {
		this->iTuSo = tu;
	}
	void setMauSo(int mau) {
		this->iMauSo = mau;
	}
	PhanSo operator+(PhanSo b) {
		PhanSo c;
		c.iTuSo = this->iTuSo * b.iMauSo + this->iMauSo * b.iTuSo;
		c.iMauSo = this->iMauSo * b.iMauSo;
		return c;
	}
	PhanSo operator-(PhanSo b) {
		PhanSo c;
		c.iTuSo = this->iTuSo * b.iMauSo - this->iMauSo * b.iTuSo;
		c.iMauSo = this->iMauSo * b.iMauSo;
		return c;
	}
	PhanSo operator*(PhanSo b) {
		PhanSo c;
		c.iTuSo = this->iTuSo * b.iTuSo;
		c.iMauSo = this->iMauSo * b.iMauSo;
		return c;
	}
	PhanSo operator/(PhanSo b) {
		PhanSo c;
		c.iTuSo = this->iTuSo * b.iMauSo;
		c.iMauSo = this->iMauSo * b.iTuSo;
		return c;
	}
	~PhanSo();
};

