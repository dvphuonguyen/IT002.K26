#include "BanhXe.h"

void BanhXe::Nhap()
{
	cout << "Nhap duong kinh : ";
	do
	{
		cin >> DuongKinh;
	} while (DuongKinh <= 0);
	cout << "Nhap chat lieu : ";
	cin.ignore();
	getline(cin, ChatLieu);
}

void BanhXe::Xuat()
{
	cout << "Xuat duong kinh: " << DuongKinh<< endl;
	cout << "Xuat chat lieu : " << ChatLieu << endl;
}
