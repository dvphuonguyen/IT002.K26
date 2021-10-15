#pragma once
#include "People.h"
#include"Singer.h"
#include"Staff.h"
#include"Student.h"
class List
{
private:
	int n;
	People** people;
public:
	void input();
	void output();
};

