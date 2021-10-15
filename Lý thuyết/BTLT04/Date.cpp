#include "Date.h"

Date::Date()
{
	iDate = 1;
	iMonth = 1;
	iYear = 1;
}

Date::Date(int d)
{
	iDate = d;
	iMonth = 1;
	iYear = 1;
}

Date::Date(int d, int m, int y)
{
	iDate = d;
	iMonth = m;
	iYear = y;
}

Date::Date(Date& x)
{
	iDate = x.iDate;
	iMonth = x.iMonth;
	iYear = x.iYear;
}

void Date::Nhap()
{
	do
	{
		cout << "Nhap nam: ";
		cin >> this->iYear;
	} while (this->iYear <= 0);
	do
	{
		cout << "Nhap thang : ";
		cin >> this->iMonth;
	} while (this->iMonth < 1 || this->iMonth>12);
	switch (iMonth)
	{
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		{
			do
			{
				cout << "Nhap ngay : ";
				cin >> this->iDate;
			} while (this->iDate < 1 || this->iDate>31);
			break;
		}
		case 4: case 6: case 9: case 11:
		{
			do
			{
				cout << "Nhap ngay : ";
				cin >> this->iDate;
			} while (this->iDate < 1 || this->iDate>30);
			break;
		}
		default:
		{
			if (NamNhuan(this->iYear) == 1)
			{
				do
				{
					cout << "Nhap ngay : ";
					cin >> this->iDate;
				} while (this->iDate < 1 || this->iDate>29);
				break;
			}
			else
			{
				do
				{
					cout << "Nhap ngay : ";
					cin >> this->iDate;
				} while (this->iDate < 1 || this->iDate>28);
				break;
			}
		}
	}
}

void Date::Xuat()
{
	cout << this->iDate << " / " << this->iMonth << " / " << this->iYear <<endl;
}

Date::~Date()
{
	return;
}

int NamNhuan(int y)
{
	{
		if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
		{
			return 1;
		}
		return 0;
	}
}
