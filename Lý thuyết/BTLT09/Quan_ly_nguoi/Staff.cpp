#include "Staff.h"

Staff::Staff()
{
	People();
	this->type = 0;
}

void Staff::input()
{
	People::input();
	cin >> this->salary;
}

void Staff::output()
{
	People::output();
	cout << this->salary << endl;
}
