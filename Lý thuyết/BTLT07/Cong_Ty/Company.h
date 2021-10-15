#pragma once
#include "Staff.h"
class Company
{
private:
	int n;
	Staff *staff;
public:
	Company();
	Staff operator[](int i) {
		return staff[i];
	}
	void input();
	void output();
	int Sum_all_in_month();
	int Sum_all_in_year();
	~Company();
};

