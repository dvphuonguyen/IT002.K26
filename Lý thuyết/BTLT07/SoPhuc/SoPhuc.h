#pragma once
#include <iostream>
using namespace std;
class SoPhuc
{
private:
	float fThuc, fAo;
public:
	SoPhuc();
	SoPhuc(float, float);
	SoPhuc(float);
	float getThuc() {
		return this->fThuc;
	}
	float getAo() {
		return this->fAo;
	}
	void setThuc(float thuc) {
		this->fThuc = thuc;
	}
	void setAo(float ao) {
		this->fAo = ao;
	}
	friend istream& operator>>(istream& is, SoPhuc& a) {
		is >> a.fThuc >> a.fAo;
		return is;
	}
	friend ostream& operator<<(ostream& os, SoPhuc a) {
        os << a.fThuc;
        if (a.fThuc != 0) {
             os << " ";
            if (a.fAo != 0) {
                if (a.fAo > 0) {
                    if (a.fAo == 1)
                        cout << "+ i";
                    else
                        cout << "+ " << a.fAo << "i";
                }
                else {
                    if (a.fAo == -1)
                        cout << "- i";
                    else
                        cout << "- " << -a.fAo << "i";
                }
            }
        }
        else {
            if (a.fAo != 0) {
                if (a.fAo > 0) {
                    if (a.fAo == 1)
                        cout << " i";
                    else
                        cout << a.fAo << "i";
                }
                else {
                    if (a.fAo == -1)
                        cout << "- i";
                    else
                        cout << "- " << -a.fAo << "i";
                }
            }
            else cout << "0";
        }
        return os;
	}
    SoPhuc operator+ (SoPhuc a);
    SoPhuc operator- (SoPhuc a);
    SoPhuc operator= (SoPhuc a);
    SoPhuc operator++();
    SoPhuc operator--();
    SoPhuc operator++(int);
    SoPhuc operator--(int);
	~SoPhuc();
};

