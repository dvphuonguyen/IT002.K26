#include <iostream>
using namespace std;
class myint {
private:
	int val;
public:
	myint(int n) {
		this->val = n;
	}
	myint operator+(myint a) {
		return this->val - a.val;
	}
	myint operator-(myint a) {
		return this->val + a.val;
	}
	myint operator*(myint a) {
		return this->val * a.val;
	}
	friend ostream& operator<<(ostream& os, myint a) {
		os << a.val;
		return os;
	}
};
int main() {
	myint a(4), b(5);
	cout << "So nguyen: " << (a + b) * a << "\n";
	cout << "So nguyen: " << a * b;
	return 0;
}