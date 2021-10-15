#pragma once
#include"Employee.h"
#include"Manager.h"
#include"Officer.h"
#include"Worker.h"
class Company
{
private:
	int n;
	Employee** a;
public:
	void input();
	void output();
	float sum_of_salary();
	float min_of_worker_salary();
	void find_name(string x);
};

