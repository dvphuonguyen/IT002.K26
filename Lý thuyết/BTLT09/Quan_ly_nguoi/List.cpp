#include "List.h"

void List::input()
{
	cout << "Nhap so luong nguoi : "; cin >> this->n;
	people = new People* [n];
	int x;
	cout << "Menu: 0_ Staff; 1_ Student; 2_ Singer\n";
	for (int i = 0; i < n; i++) {
		cin >> x;
		switch(x) {
			case 0:
				people[i] = new Staff();
				cin.ignore();
				((Staff*)people[i])->input();
				break;
			case 1:
				people[i] = new Student();
				cin.ignore();
				((Student*)people[i])->input();
				break;
			case 2:
				people[i] = new Singer();
				cin.ignore();
				((Singer*)people[i])->input();
				break;
		}
		
	}
}

void List::output()
{
	for (int i = 0; i < n; i++) {
		switch (people[i]->getType) {
		case 0:
			((Staff*)people[i])->output;
			break;
		case 1:
			((Student*)people[i])->output;
			break;
		case 2:
			((Singer*)people[i])->output;
			break;
		}
	}
}
