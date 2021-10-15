#include "SoPhuc.h"

SoPhuc::SoPhuc()
{
    this->ao = 0;
    this->thuc = 0;
}

SoPhuc::SoPhuc(float x)
{
    this->thuc = x;
    this->ao = 0;
}

SoPhuc SoPhuc::operator-(SoPhuc a)
{
	SoPhuc c;
	c.thuc = this->thuc - a.thuc;
	c.ao = this->ao - a.ao;
	return c;
}

bool SoPhuc::operator>=(SoPhuc a)
{
    if ((pow(this->thuc, 2) + pow(this->ao, 2)) >= (pow(a.thuc, 2) + pow(a.ao, 2))) return true;
	return false;
}

void SoPhuc::nhap()
{
	cin >> this->thuc >> this->ao;
}

void SoPhuc::xuat(){
    if (this->thuc != 0) {
        cout << this->thuc << " ";
        if (this->ao != 0) {
            if (this->ao > 0) {
                if (this->ao == 1)
                    cout << "+ i";
                else
                    cout << "+ " << this->ao << "i";
            }
            else {
                if (this->ao == -1)
                    cout << "- i";
                else
                    cout << "- " << -this->ao << "i";
            }
        }
    }
    else {
        if (this->ao != 0) {
            if (this->ao > 0) {
                if (this->ao == 1)
                    cout << " i";
                else
                    cout << this->ao << "i";
            }
            else {
                if (this->ao == -1)
                    cout << "- i";
                else
                    cout << "- " << -this->ao << "i";
            }
        }
        else cout << "0";
    }
}

SoPhuc::~SoPhuc()
{
}

SoPhuc operator+(SoPhuc a, SoPhuc b)
{
	SoPhuc c;
	c.thuc = a.thuc + b.thuc;
	c.ao = a.ao + b.ao;
	return c;
}
