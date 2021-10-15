#include "Staff.h"

Staff::Staff()
{
	this->Name = "Nguyen Van A";
	this->Date = "1/1/2001";
	this->Sex = "Nam";
	this->BanQuanLy = 1;
	this->Salary = 10000000;
}

Staff::Staff(string name)
{
	this->Name = name;
	this->Date = "1/1/2001";
	this->Sex = "Nam";
	this->BanQuanLy = 1;
	this->Salary = 10000000;
}

Staff::Staff(string name, string date, string sex, bool banquanly, bool nhanviensanxuat, int salary)
{
	this->Name = name;
	this->Date = date;
	this->Sex = sex;
	this->BanQuanLy = banquanly;
	this->NhanVienSanXuat = nhanviensanxuat;
	this->Salary = salary;
}

bool Staff::getBanQuanLy()
{
	return this->BanQuanLy;
}

bool Staff::getNhanVienSanXuat()
{
	return this->NhanVienSanXuat;
}


int Staff::Sum_in_month()
{
	if (this->BanQuanLy == 1) {
		return (this->Salary + 500000);
	}
	else if (this->Sale_product > this->Product) {
		return (this->Salary + (this->Sale_product - this->Product) * 30000);
	}
}

int Staff::Sum_in_year()
{
	return (this->Sum_in_month() * 12);
}

Staff::~Staff()
{
}
