#include "Child.h"

Child::Child()
{
	Gamer();
	school = "";
	type = 0;
}

void Child::input()
{
	cout << "Nhap truong cua khach hang : "; getline(cin, school);
	Gamer::input();
}

void Child::output()
{
	Gamer::output();
	cout << " - " << age << " - " << height << " - " << school;
}
