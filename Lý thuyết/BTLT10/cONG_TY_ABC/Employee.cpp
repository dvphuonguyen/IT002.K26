#include "Employee.h"
/*
Employee::Employee()
{
	this->name = "";
	this->date_of_birth = "";
	this->basic_salary = 0;
	this->type = 0;
}
*/
void Employee::input()
{
	cout << "Nhap ten: "; getline(cin, this->name);
	cout << "Nhap ngay sinh: "; getline(cin, this->date_of_birth);
	cout << "Nhap luong can ban: "; cin >> this->basic_salary;
}

void Employee::output()
{
	cout << this->name << " - " << this->date_of_birth << " - " << this->basic_salary;
}

Employee::~Employee()
{
}


