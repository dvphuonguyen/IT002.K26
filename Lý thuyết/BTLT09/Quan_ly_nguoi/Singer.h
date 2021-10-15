#pragma once
#include "People.h"
class Singer : public People
{
private:
	string song;
public:
	Singer();
	void input();
	int getType() {
		return type;
	}
	void output();
};

