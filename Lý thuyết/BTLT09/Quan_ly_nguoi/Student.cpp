#include "Student.h"

Student::Student()
{
	People();
	this->type = 1;
}

void Student::input()
{
	People::input();
	cin >> this->ID;
}

void Student::output()
{
	People::output();
	cout << this->ID << endl;
}
