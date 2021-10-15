#pragma once
#include "Employee.h"
class Officer : public Employee
{
private:
	int number_of_day;
	float pension;
public:
	Officer();
	int getType() {
		return Employee::type;
	}
	string getName() {
		return Employee::name;
	}
	void input();
	void output();
	float salary();
	~Officer();
};

