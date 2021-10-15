#pragma once
#include <iostream>
using namespace std;
int NamNhuan(int y);

class Date
{
private:
	int iDate, iMonth, iYear;
public:
	Date();
	Date(int d);
	Date(int d, int m, int y);
	//Date(int d=1, int m=1, int y=1);
	int getDate()
	{
		return iDate;
	}
	int getMonth()
	{
		return iMonth;
	}
	int getYear()
	{
		return iYear;
	}
	void setDate(int d)
	{
		iDate = d;
	}
	void setMonth(int m)
	{
		iMonth = m;
	}
	void setYear(int y)
	{
		iYear = y;
	}
	Date(Date&);
	void Nhap();
	void Xuat();
	~Date();
};

