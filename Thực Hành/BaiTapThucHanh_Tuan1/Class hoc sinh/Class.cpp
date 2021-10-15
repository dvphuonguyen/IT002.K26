#include "Class.h"

void Class::Input()
{
	getline(cin, Name);
	cin >> dt;
	cin >> dv;
}

void Class::Ouput()
{
	cout << "Thong tin hoc sinh :" << endl;
	cout <<"Ho ten : " << Name << endl;
	cout << "Diem toan : " << dt << endl;
	cout << "Diem van : " << dv << endl;
	cout << "Diem trung binh : " << (dt + dv) / 2 << endl;
}
int main()
{
	Class a;
	a.Input();
	a.Ouput();
	return 0;
}
