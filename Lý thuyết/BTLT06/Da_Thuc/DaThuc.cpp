#include "DaThuc.h"

DaThuc::DaThuc()
{
	this->n = 0;
	this->a = new float[n];
}

void DaThuc::nhap()
{
	cin >> this->n;
	a = new float[n];
	for (int i = this->n - 1; i >= 0; i--) {
		cin >> this->a[i];
	}
}

void DaThuc::xuat()
{
	for (int i = n - 1; i >= 0; i--) {
		/*if (i != 0) {
			if (i != 1 && this->a[i] != 1) cout << this->a[i] << "x^" << i << " + ";
			else if (i == 1 && this->a[i] == 1)cout << "x + ";
			else if (i == 1) cout << this->a[i] << "x" << " + ";
			else cout << "x^" << i << " + ";
		}
		else {
			if (this->a[i] == 0);
			else cout << this->a[i] ;
		}*/
		if (i == n - 1) {
			if (this->a[i] == 0);
			else if (this->a[i] == -1) cout << "- x^" << i << " ";
			else if (this->a[i] == 1) cout << "x^" << i << " ";
			else if (this->a[i] < 0) cout << "- " << -this->a[i] << "x^" << i << " ";
			else cout << this->a[i] << "x^" << i << " ";
		}
		else  if (i == 0) {
			if (this->a[i] == 0);
			else if (this->a[i] > 0) cout << "+ " << this->a[i];
			else cout << "- " << -this->a[i];
		}
		else {
			if (this->a[i] == 0);
			else if (this->a[i] > 0) {
				if (this->a[i] == 1 && i == 1) cout << "+ x ";
				else if (i == 1) cout << "+ " << this->a[i] << "x ";
				else if (this->a[i] == 1) cout << "+ x^" << i << " ";
				else cout << "+ " << this->a[i] << "x^" << i << " ";
			}
			else {
				if (this->a[i] == -1 && i == 1) cout << "- x ";
				else if (i == 1) cout << "- " << -this->a[i] << "x ";
				else if (this->a[i] == -1) cout << "- x^" << i << " ";
				else cout << "- " << -this->a[i] << "x^" << i << " ";
			}
		}
	}
}

DaThuc DaThuc::operator+(DaThuc a)
{
	DaThuc b; int i, j;
	// i lon j be
	if (this->n > a.n) {
		i = this->n;
		j = a.n;
	}
	else {
		i = a.n;
		j = this->n;
	}
	b.n = i;
	b.a = new float[b.n];
	for (int k = 0; k < j; k++) {
		b.a[k] = this->a[k] + a.a[k];
	}
	if (i == a.n) {
		for (int k = j; k < i; k++) {
			b.a[k] = a.a[k];
		}
	}
	else {
		for (int k = j; k < i; k++) {
			b.a[k] = this->a[k];
		}
	}
	return b;
}

DaThuc DaThuc::operator-(DaThuc a)
{
	DaThuc b; int i, j;
	// i lon j be
	if (this->n > a.n) {
		i = this->n;
		j = a.n;
	}
	else {
		i = a.n;
		j = this->n;
	}
	b.n = i;
	b.a = new float[b.n];
	for (int k = 0; k < j; k++) {
		b.a[k] = this->a[k] - a.a[k];
	}
	if (i == a.n) {
		for (int k = j; k < i; k++) {
			b.a[k] = - a.a[k];
		}
	}
	else {
		for (int k = j; k < i; k++) {
			b.a[k] = this->a[k];
		}
	}
	return b;
}

bool DaThuc::operator!=(DaThuc a)
{
	// true :!=
	// false :==
	if (this->n != a.n) return true;
	else {
		for (int i = 0; i < this->n; i++) {
			if (a.a[i] != this->a[i]) return true;
		}
	}
	return false;
}

float DaThuc::The_Gia_Tri(float x)
{
	float s = 0;
	for (int i = 0; i < this->n; i++) {
		s += this->a[i] * pow(x, i);
	}
	return s;
}

DaThuc::~DaThuc()
{
}
