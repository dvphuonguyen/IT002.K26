#include"List.h"
int main() {
	List a;
	cout << "--------Nhap--------\n";
	a.input();
	cout << "--------Xuat--------\n";
	a.output();
	a.Info_child_lowest();
	a.Info_gamer_highest_cost();
	return 0;
}