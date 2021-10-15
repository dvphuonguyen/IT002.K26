#include "Company.h"
int main() {
	Company a;
	cout << "\t\tNhap:\n";
	a.input();
	cout << "\t\tXuat:\n";
	a.output();
	cout << "\nTong so luong cua tat ca nhan vien trong mot thang la : " << a.Sum_all_in_month() << endl;
	cout << "\nTong so luong cua tat ca nhan vien trong mot nam la : " << a.Sum_all_in_year();
	return 0;
}