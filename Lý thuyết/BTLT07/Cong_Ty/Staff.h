#pragma once
#include <iostream>
#include <string>
using namespace std;
class Staff
{
private:
	string Name;
	string Date;
	string Sex;
	bool BanQuanLy;
	bool NhanVienSanXuat;
	int Salary;
	int Product;
	int Sale_product;
public:
	Staff();
	Staff(string name);
	Staff(string name, string date, string sex, bool banquanly,bool nhanviensanxuat, int salary);
	bool getBanQuanLy();
	bool getNhanVienSanXuat();
	string getName() {
		return this->Name;
	}
	string getDate() {
		return this->Date;
	}
	string getSex() {
		return this->Sex;
	}
	int getSalary() {
		return this->Salary;
	}
	int Sum_in_month();
	int Sum_in_year();
	friend istream& operator>> (istream& is, Staff& a) {
		//cin.ignore();
		getline(is, a.Name);
		getline(is, a.Date);
		getline(is, a.Sex);
		is >> a.BanQuanLy;
		is >> a.NhanVienSanXuat;
		is >> a.Salary;
		if (a.NhanVienSanXuat == 1){
			is >> a.Product;
			is >> a.Sale_product;
		}
		return is;
	}
	friend ostream& operator<<(ostream& os, Staff a) {
		os << a.Name << "\t" << a.Date << "\t" << a.Sex << "\t";
		if (a.BanQuanLy == 1) os << "Ban quan ly\t";
		else cout << "Nhan vien san xuat\t";
		os << a.Salary << "\t";
		if (a.NhanVienSanXuat == 1) {
			os << a.Product << "\t" << a.Sale_product;
		}
		cout << "\n";
		return os;
	}
	~Staff();
};

