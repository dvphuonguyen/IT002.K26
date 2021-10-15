#include <iostream>
#include <string>
using namespace std;

class animal {
protected:
	int type;
	string speak;
public:
	animal() {
		type = 0;
		speak = "";
	}
	virtual string setSpeak() {
		return this->speak;
	}
};
class cow : public animal {
private:
	
public:
	cow() {
		animal();
		this->type = 1;
		this->speak = "Booo";
	}
	string setSpeak() {
		return this->speak;
	}
};
class sheep :public animal {
private:

public:
	sheep() {
		animal();
		this->type = 2;
		this->speak = "Beee";
	}
	string setSpeak() {
		return this->speak;
	}
};
class lamb :public animal {
private:

public:
	lamb() {
		animal();
		this->type = 3;
		this->speak = "Eeee";
	}
	string setSpeak() {
		return this->speak;
	}
};
int main() {
	int n1, n2, n3, n;
	cin >> n1 >> n2 >> n3 >> n;
	int m = n1 + n2 + n3;
	animal* animals[100];
	int x, y, z;
	x = n1, y = n2, z = n3;
	for (int i = 0; i < m; i++) {
		if (n1 > 0) {
			animals[i] = new cow();
			--n1;
		}
		else if (n2 > 0) {
			animals[i] = new sheep();
			--n2;
		}
		else if (n3 > 0) {
			animals[i] = new lamb();
			--n3;
		}
	}
	for (int i = 0; i < m; i++) {
		if (i == m - 1) {
			cout << animals[i]->setSpeak() << ".\n";
		}
		else {
			cout << animals[i]->setSpeak() << ",";
		}
	}
	cout << "Bo: " << x * n * 10 << "\n";
	cout << "Cuu: " << y * n * 5 << "\n";
	cout << "De: " << z * n * 8<< "\n";
	return 0;
}