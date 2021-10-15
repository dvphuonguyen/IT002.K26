#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
	string name;
	string date_of_birth;
	int type;
	float basic_salary;
public:
	//Employee();
	virtual int getType() = 0;
	virtual string getName() = 0;
	virtual void setType(int x) {
		this->type = x;
	}
	virtual void input();
	virtual void output();
	virtual float salary() = 0;

	~Employee();
};

