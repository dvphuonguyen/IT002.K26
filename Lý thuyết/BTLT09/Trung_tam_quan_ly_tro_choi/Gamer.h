#pragma once
#include <iostream>
#include <string>
using namespace std;
class Gamer
{
protected:
	string name;
	string ID;
	float price;
	int age;
	int height;
	int the_numbers_of_game;
	int type;
public:
	Gamer();
	virtual void input();
	virtual void output();
	virtual int getType() {
		return type;
	}
	int getHeight() {
		return height;
	}
	void setAge(int x) {
		age = x;
	}
	void setHeight(int x) {
		height = x;
	}
	virtual void setPrice(float x) {
		price = x;
	}
	float Bill() {
		return price + the_numbers_of_game * 100;
	}
};

