#pragma once
#include "People.h"
class Staff : public People
{
private:
	float salary;
public:
	Staff();
	void input();
	int getType() {
		return type;
	}
	void output();
};

