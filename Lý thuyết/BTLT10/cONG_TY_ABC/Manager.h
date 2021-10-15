#pragma once
#include "Employee.h"
class Manager : public Employee
{
private:
	int he_so_chuc_vu;
	float bonus;
public:
	Manager();
	int getType() {
		return Employee::type;
	}
	string getName() {
		return Employee::name;
	}
	void input();
	void output();
	float salary();
	~Manager();
};

