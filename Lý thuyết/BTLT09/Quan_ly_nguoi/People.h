#pragma once
#include<iostream>
#include <string>
using namespace std;
class People
{
protected:
	string name;
	int age;
	int type;
public:
	People();
	void input();
	int getType() {
		return type;
	}
	void output();
};

