#pragma once
#include"Gamer.h"
class Adult : public Gamer
{
private:
public:
	Adult();
	void input();
	void output();
	void setPrice(float x) {
		price = x;
	}
};

