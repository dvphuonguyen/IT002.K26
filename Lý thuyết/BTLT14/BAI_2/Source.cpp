#include <iostream>
#include <vector>
using namespace std;
class Point {
private: 
	int x;
	int y;
public:
	Point()
	{
		this->x = this->y = 0;
	}
	friend istream& operator>>(istream& is, Point& a)
	{
		is >> a.x >> a.y;
		return is;
	}
	friend ostream& operator<<(ostream& os, Point a)
	{
		os << "( " << a.x << " , " << a.y << " )\n";
		return os;
	}
	~Point()
	{

	}
};
class DaGiac {
private:
	int iSoLuongDinhTrongDaGiac;
	vector<Point> point;
public:
	DaGiac()
	{
		this->iSoLuongDinhTrongDaGiac = 0;
	}
	friend istream& operator>>(istream& is, DaGiac& a)
	{
		cout << "Nhap so dinh cua da giac: "; is >> a.iSoLuongDinhTrongDaGiac;
		a.point.resize(a.iSoLuongDinhTrongDaGiac);
		for (int i = 0; i < a.iSoLuongDinhTrongDaGiac; i++)
		{
			cout << "Nhap toa do cua diem: "; is >> a.point[i];
		}
		return is;
	}
	friend ostream& operator<<(ostream& os, DaGiac a)
	{
		os << "Da giac co " << a.iSoLuongDinhTrongDaGiac << " dinh cos toa do lan luot la:\n";
		for (int i = 0; i < a.iSoLuongDinhTrongDaGiac; i++)
		{
			os << a.point[i] << "\n";
		}
		return os;
	}
	~DaGiac()
	{

	}
};
int main()
{
	DaGiac a;
	cin >> a;
	cout << a;
	return 0;
}