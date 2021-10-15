#include "Gamer.h"

Gamer::Gamer()
{
	name = "";
	ID = "";
	price = 0;
	age = 0;
	height = 0;
	the_numbers_of_game = 0;
	type = 0;
}

void Gamer::input()
{
	cout << "Nhap ten khach hang : "; getline(cin, name);
	cout << "Nhap ID khach hang : "; getline(cin, ID);
	cout << "Nhap so luong tro choi : "; cin >> the_numbers_of_game;
}

void Gamer::output()
{
	cout << name << " - " << ID << " - " << price << " - " << the_numbers_of_game;
}