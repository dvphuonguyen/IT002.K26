#include "List.h"

void List::input()
{
	cout << "Nhap so luong khach hang : ";
	cin >> n;
	a = new Gamer * [n];
	int t, h;
	float g;
	cout << "Nhap gia ve vao : "; cin >> g;
	for (int i = 0; i < n; i++) {
		cout << "Nhap tuoi khach hang : "; cin >> t;
		cout << "Nhap chieu cao khach hang : "; cin >> h;
		
		if (t < 10 && h < 130) {
			a[i] = new Child();
			cin.ignore();
			a[i]->input();
			a[i]->setAge(t);
			a[i]->setHeight(h);
			a[i]->setPrice(g);
		}
		else {
			a[i] = new Adult();
			cin.ignore();
			a[i]->input();
			a[i]->setAge(t);
			a[i]->setHeight(h);
			a[i]->setPrice(g);
		}
	}
}

void List::output()
{
	for (int i = 0; i < n; i++) {
		a[i]->output();
		cout << "\n";
	}
}

void List::Info_child_lowest()
{
	int min;
	for (int i = 0; i < n; i++) {
		if (a[i]->getType() == 0) {
			min = i;
			break;
		}
	}
	for (int i = 0; i < n; i++) {
		if (a[i]->getType() == 0) {
			if (a[i]->getHeight()< a[min]->getHeight()) {
				min = i;
			}
		}
	}
	cout << "Thong tin cua tre em thap nhat : \n";
	a[min]->output();
	cout << endl;
}

void List::Info_gamer_highest_cost()
{
	int max = 0;
	for (int i = 1; i < n; i++) {
		if (a[i]->Bill() > a[max]->Bill()) {
			max = i;
		}
	}
	cout << "Thong tin cua khach hang chi tieu nhieu nhat : \n";
	a[max]->output();
	cout << " - " << a[max]->Bill() << "\n";
}
