#pragma once
#include "Date.h"
#include <string>
class Teacher
{
private:
	Teacher* a;
	string sName;
	string sMaSoGV;
	Date *dNgaySinh;
	int iAge;
	int iSoNamCongTac;
	int iSoLuong;
public:
	Teacher();
	Teacher(string Name);
	Teacher(Date );
	Teacher(int age);
	//Teacher(string Name ="Nguyen Van A", string msgv = "19520345", Date nsinh (int d=1, int m=1, int y=1995), int age = 25, int namcongtac= 20 );
	Teacher(Teacher&, Date &);
	string getName()
	{
		return sName;
	}
	string getMaSoGV()
	{
		return sMaSoGV;
	}
	int getAge()
	{
		return iAge;
	}
	int getSoNamCongTac()
	{
		return iSoNamCongTac;
	}
	void setName(string name)
	{
		sName = name;
	}
	void setMaSoGV(string msgv)
	{
		sMaSoGV = msgv;
	}
	void setAge(int age)
	{
		iAge = age;
	}
	void setSoNamCongTac(int namcongtac)
	{
		iSoNamCongTac = namcongtac;
	}
	void Input();
	void Output();
	void Luong();
	~Teacher();
};

