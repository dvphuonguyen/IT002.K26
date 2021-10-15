#include <iostream>
using namespace std;
class cDaThuc {
private:
	float a, b;
public:
	cDaThuc()
	{
		this->a = 0;
		this->b = 0;
	}
	friend istream& operator>>(istream& is, cDaThuc& a)
	{
		cout << "Nhap a: "; is >> a.a;
		cout << "Nhap b: "; is >> a.b;
		return is;
	}
	friend ostream& operator<<(ostream& os, cDaThuc a) {
		os << "F(x) = ";
		os << a.a << "x";
		if (a.b > 0) os << "+" << a.b << "\n";
		else if (a.b < 0) os << "-" << -a.b << "\n";
		else os << "\n";
		return os;
	}
	float tim_y(float x) {
		return (this->a * x + this->b);
	}
	float tim_x(float y)
	{
		return (y - this->b) / this->a;
	}
	cDaThuc operator+(cDaThuc a) {
		cDaThuc b;
		b.a = this->a + a.a;
		b.b = this->b + a.b;
		return b;
	}
	~cDaThuc()
	{

	}
};
int main()
{
	cDaThuc a, b;
	cin >> a;
	cout << a;
	cin >> b;
	cout << b;
	cout << "Nhap xo = "; int x; cin >> x;
	cout << "Fa(x) = " << a.tim_y(x) << "\n";
	cout << "Fb(x) = " << b.tim_y(x) << "\n";
	cout << "Nhap yo = "; int y; cin >> y;
	cout << "xa = " << a.tim_x(y) << "\n";
	cout << "xb = " << b.tim_x(y) << "\n";
	return 0;
}