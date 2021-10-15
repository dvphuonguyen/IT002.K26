#pragma once
#include "People.h"
class Student : public People
{
private:
	string ID;
public:
	Student();
	void input();
	int getType() {
		return type;
	}
	void output();
};

