#include "Point.h"

void Point::Nhap()
{
	cout << "Nhap hoanh do : "; cin >> this->x;
	cout << "Nhap tung do : "; cin >> this->y;
}

void Point::Xuat()
{
	cout << "( " << this->x << " , " << this->y << " )\n";
}
