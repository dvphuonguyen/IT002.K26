#include "Company.h"
int main() {
	Company a;
	string x;
	cout << "Nhap ten can tim: ";
	getline(cin, x);
	cout << "Menu lua chon : 1-vanphong, 2-sanxuat, 3-quanly\n";
	a.input();
	a.output();
	cout << "Tong tien luong cua cong ty: " << a.sum_of_salary() << "\n";
	cout << "Tien luong thap nha cua nvsx la: " << a.min_of_worker_salary() << "\n";
	cout << "Thong tin cua khach hang co ten nhu yeu cau la: \n";
	a.find_name(x);
	return 0;

}