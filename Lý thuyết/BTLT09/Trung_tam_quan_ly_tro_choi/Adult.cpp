#include "Adult.h"

Adult::Adult()
{
	Gamer();
	type = 1;
}

void Adult::input()
{
	Gamer::input();
}

void Adult::output()
{
	Gamer::output();
	cout << " - " << age << " - " << height;
}
