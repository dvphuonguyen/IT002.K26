#include <iostream>
using namespace std;
class ThoiGian {
private:
	int h, p, s;
public:
	ThoiGian()
	{
		h = p = s = 0;
	}
	friend istream& operator>>(istream& is, ThoiGian& a)
	{
		is >> a.h >> a.p >> a.s;
		return is;
	}
	friend ostream& operator<<(ostream& os, ThoiGian a)
	{
		os << a.h << " h " << a.p << " p " << a.s << " s\n";
		return os;
	}
	void Tang(int x)
	{
		int t = h * 3600 + p * 60 + s + x;
		h = t / 3600;
		p = t % 3600 / 60;
		s = t % 3600 % 60;
	}
	ThoiGian& operator++()
	{
		Tang(1);
		return *this;
	}
	ThoiGian operator++(int )
	{
		ThoiGian a = *this;
		Tang(1);
		return a;
	}
	~ThoiGian()
	{

	}
};
int main()
{
	ThoiGian a;
	cin >> a;
	cout << a;
	cout << " a++ = " << a++;
	cout << " ++a = " << ++a;
	return 0;
}