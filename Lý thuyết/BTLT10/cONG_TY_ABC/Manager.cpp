#include "Manager.h"


Manager::Manager()
{
	Employee::type = 3;
}

void Manager::input()
{
	Employee::input();
	cout << "Nhap he so chuc vu: "; cin >> this->he_so_chuc_vu;
	cout << "Nhap tien thuong: "; cin >> this->bonus;
}

void Manager::output()
{
	Employee::output();
	cout << " - " << this->he_so_chuc_vu << " - " << this->bonus;
}

float Manager::salary()
{
	return Employee::basic_salary * this->he_so_chuc_vu + this->bonus;
}

Manager::~Manager()
{
}

