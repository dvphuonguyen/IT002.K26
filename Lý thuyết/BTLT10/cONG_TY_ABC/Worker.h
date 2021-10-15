#pragma once
#include "Employee.h"
class Worker : public Employee
{
private:
	int number_of_product;
public:
	Worker();
	int getType() {
		return Employee::type;
	}
	string getName() {
		return Employee::name;
	}
	void input();
	void output();
	float salary();
	~Worker();
};

