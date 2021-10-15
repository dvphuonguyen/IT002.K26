#include "Officer.h"

Officer::Officer()
{
	Employee::type = 1;
}

void Officer::input()
{
	Employee::input();
	cout << "Nhap so ngay lam viec: "; cin >> this->number_of_day;
	cout << "Nhap tro cap: "; cin >> this->pension;
}

void Officer::output()
{
	Employee::output();
	cout << " - " << this->number_of_day << " - " << this->pension;
}

float Officer::salary()
{
	return Employee::basic_salary + this->number_of_day * 200000 + this->pension;
}

Officer::~Officer()
{
}
