#include "Singer.h"

Singer::Singer()
{
	People();
	this->type = 2;
}

void Singer::input()
{
	People::input();
	getline(cin, this->song);
}

void Singer::output()
{
	People::output();
	cout << this->song << endl;
}
