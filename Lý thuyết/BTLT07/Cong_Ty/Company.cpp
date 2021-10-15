#include "Company.h"

Company::Company()
{
	this->n = 1;
	this->staff = new Staff[1];
}

void Company::input()
{
	cout << "Nhap so luong nhan vien : "; cin >> this->n;
	this->staff = new Staff[n];
	for (int i = 0; i < n; i++) {
		cin.ignore();
		cout << "Nhan vien thi " << i + 1 << " la : " << endl;
		cin >> staff[i];
	}
}

void Company::output()
{
	cin.ignore();
	for (int i = 0; i < n; i++) {
		cout << "Nhan vien thi " << i + 1 << " la : " << endl;
		cout << staff[i] << endl;
	}
}

int Company::Sum_all_in_month()
{
	int s = 0;
	for (int i = 0; i < this->n; i++) {
		s += staff[i].Sum_in_month();
	}
	return s;
}

int Company::Sum_all_in_year()
{
	int s = 0;
	for (int i = 0; i < this->n; i++) {
		s += staff[i].Sum_in_year();
	}
	return s;
}

Company::~Company()
{
}
