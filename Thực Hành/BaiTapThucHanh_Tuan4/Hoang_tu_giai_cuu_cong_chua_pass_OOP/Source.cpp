#include <iostream>
using namespace std;
class gate {
protected:
	int type;
public:
	virtual void input() = 0;
	virtual int condition() = 0;
	virtual int getType() {
		return this->type;
	}
};
class business_gate :public gate {
private:
	int bill;
	int quantity;
public:
	void input() {
		cin >> bill >> quantity;
		gate::type = 1;
	}
	int condition() {
		return this->bill * this->quantity;
	}
	int getType() {
		return this->type;
	}
};
class academic_gate :public gate {
private:
	int smart;
public:
	void input() {
		cin >> this->smart;
		gate::type = 2;
	}
	int condition() {
		return this->smart;
	}
	int getType() {
		return this->type;
	}
};
class power_gate :public gate {
private:
	int power;
public:
	void input() {
		cin >> this->power;
		this->type = 3;
	}
	int condition() {
		return this->power;
	}
	int getType() {
		return this->type;
	}
};
int main() {
	int n, x;
	cin >> n;
	gate* a[100];
	for (int i = 0; i < n; i += 1) {
		cin >> x;
		switch (x) {
		case 1:
			a[i] = new business_gate();
			break;
		case 2:
			a[i] = new academic_gate();
			break;
		case 3:
			a[i] = new power_gate();
			break;
		}
		a[i]->input();
	}
	int money, smart, power;
	cin >> money >> smart >> power;
	for (int i = 0; i < n; i += 1) {
		x = a[i]->getType();
		switch (x) {
		case 1:
			money -= a[i]->condition();
			break;
		case 2:
			if (smart >= a[i]->condition());
			else smart = -1;
			break;
		case 3:
			if (power >= a[i]->condition()) {
				power -= a[i]->condition();
			}
			else power = -1;
			break;
		}
	}
	if (money > -1 && smart > -1 && power > -1) {
		cout << money << " " << smart << " " << power << " \n";
	}
	else cout << "-1\n";
	return 0;
}