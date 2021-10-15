#include "Company.h"

void Company::input()
{
	cout << "\t\tNhap\n";
	cout << "Nhap so luong nhan vien: "; cin >> this->n;
	a = new Employee * [n];
	int x;
	for (int i = 0; i < n; i++) {
		cout << "Nhap the loai: ";
		cin >> x;
		switch (x) {
		case 1:
			a[i] = new Officer();
			break;
		case 2:
			a[i] = new Worker();
			break;
		case 3:
			a[i] = new Manager();
			break;
		}
		cin.ignore();
		a[i]->input();
	}
}

void Company::output()
{
	cout << "\t\tXuat\n";
	for (int i = 0; i < n; i++) {
		a[i]->output();
		cout << " - " << a[i]->salary() << "\n";
	}
}

float Company::sum_of_salary()
{
	float s = 0;
	for (int i = 0; i < n; i++) {
		s += a[i]->salary();
	}
	return s;
}

float Company::min_of_worker_salary()
{
	int m = 0;
	for (int i = 0; i < n; i++) {
		if (a[i]->getType() == 2 && a[i]->salary() < a[m]->salary()) {
			m = i;
		}
	}
	return a[m]->salary();
}

void Company::find_name(string x)
{
	for (int i = 0; i < n; i++) {
		if (a[i]->getName() == x) {
			a[i]->output();
			cout << " - " << a[i]->salary() << "\n";
		}
	}
}

