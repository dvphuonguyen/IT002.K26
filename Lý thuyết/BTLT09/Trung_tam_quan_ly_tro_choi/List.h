#pragma once
#include"Gamer.h"
#include"Adult.h"
#include"Child.h"
class List
{
private:
	int n;
	Gamer** a;
public:
	void input();
	void output();
	void Info_child_lowest();
	void Info_gamer_highest_cost();
};

