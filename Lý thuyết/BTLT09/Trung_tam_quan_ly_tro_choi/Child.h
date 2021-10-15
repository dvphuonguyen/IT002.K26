#pragma once
#include"Gamer.h"
class Child : public Gamer
{
private:
	string school;
public:
	Child();
	void input();
	void output();
	void setPrice(float x) {
		if (school == "Truong Mau giao A") {
			price = x * 30 / 100;
		}
		else price = x / 2;
	}
};

