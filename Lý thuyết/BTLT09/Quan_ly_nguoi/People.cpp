#include "People.h"



People::People()
{
	this->name = "";
	this->age = 0;
	this->type = 0;
}

void People::input()
{
	getline(cin, this->name);
	cin >> this->age;
}

void People::output()
{
	cout << this->name << " - " << this->age << " - ";
}
