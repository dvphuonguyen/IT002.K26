#include <iostream>
using namespace std;
class time {
private:
	int h, p, s;
public:
	time(int a = 0, int b = 0, int c = 0)
	{
		h = a;
		p = b;
		s = c;
	}
	friend istream& operator>>(istream& is, time& a) {
		is >> a.h >> a.p >> a.s;
		return is;
	}
	friend ostream& operator<<(ostream& os, time a) {
		os << a.h << "h " << a.p << "p " << a.s << "s \n";
		return os;
	}
	void Cong(int x) {
		int t = h * 3600 + p * 60 + s + x;
		h = t / 3600;
		p = t % 3600 / 60;
		s = t % 3600 % 60;
		
	}
	time operator++(int) {
		time a = *this;
		Cong(1);
		if (s >= 60) {
			s = 0;
			p += 1;
		}
		if (p >= 60) {
			p = 0;
			h += 1;
		}
		if (h >= 24) {
			h %= 24;
		}
		return a;
	}
	time& operator++()
	{
		Cong(1);
		if (s >= 60) {
			s = 0;
			p += 1;
		}
		if (p >= 60) {
			p = 0;
			h += 1;
		}
		if (h >= 24) {
			h %= 24;
		}
		return *this;
	} }
;
int main()
{
	time a;
	cin >> a;
	cout << a++;
	cout << ++a;
	return 0;
}