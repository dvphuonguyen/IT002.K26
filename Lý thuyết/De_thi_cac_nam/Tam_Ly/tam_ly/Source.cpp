#include <iostream>
#include <string>
#include <vector>
using namespace std;
class tam_ly {
protected:
	int iLoai;
	float fChiSo;
public:
	tam_ly()
	{
		iLoai = 0;
		fChiSo = 0;
	}
	virtual void nhap()
	{
		cin >> fChiSo;
	}
	virtual void xuat() = 0;
	virtual int getLoai() {
		return iLoai;
	}
	virtual float getChiSo() {
		return fChiSo;
	}
};
class O :public tam_ly {
public:
	O()
	{
		iLoai = 1;
	}
	void xuat()
	{
		cout << "O - " << fChiSo;
	}
};
class C :public tam_ly {
public:
	C()
	{
		iLoai = 2;
	}
	void xuat()
	{
		cout << "C - " << fChiSo;
	}
};
class E:public tam_ly {
public:
	E()
	{
		iLoai = 3;
	}
	void xuat()
	{
		cout << "E - " << fChiSo;
	}
};
class A :public tam_ly {
public:
	A()
	{
		iLoai = 4;
	}
	void xuat()
	{
		cout << "A - " << fChiSo;
	}
};
class N :public tam_ly {
public:
	N()
	{
		iLoai = 5;
	}
	void xuat()
	{
		cout << "N - " << fChiSo;
	}
};
class nguoi {
private:
	string sName;
	vector<tam_ly*> a;
public:
	nguoi()
	{
		sName = "";
	}
	void nhap()
	{
		getline(cin, sName);
		a.resize(5);
		for (int i = 0; i < 5; i++)
		{
			if (i == 0) a[i] = new O;
			if (i == 1) a[i] = new C;
			if (i == 2) a[i] = new E;
			if (i == 3) a[i] = new A;
			if (i == 4) a[i] = new N;
			cin.ignore();
			a[i]->nhap();
		}
	}
	void xuat()
	{
		cout << sName << "\n";
		for (int i = 0; i < 5; i++)
		{
			a[i]->xuat();
			cout << "\n";
		}
	}
	string getName()
	{
		return sName;
	}
	int LuuY()
	{
		for (int i = 0; i < 5; i++)
		{
			if (a[i]->getLoai() == 2 && a[i]->getChiSo() <= 30) return 1;
			if (a[i]->getLoai() == 5 && a[i]->getChiSo() >= 70) return 1;
			if (a[i]->getLoai() == 3 && a[i]->getChiSo() <= 30 && a[i + 2]->getLoai() == 5 && a[i + 2]->getChiSo() >= 70) return 1;
		}
		return 0;
	}
	void xuat_du_lieu()
	{
		xuat();
		for (int i = 0; i < 5; i++)
		{
			cout << a[i]->getChiSo() << " : ";
			if (a[i]->getLoai() == 1) cout << "san sang trai nghiem O\n";
			if (a[i]->getLoai() == 2) cout << "tu chu tan tam C\n";
			if (a[i]->getLoai() == 3) cout << "huong ngoai E\n";
			if (a[i]->getLoai() == 4) cout << "hoa dong de chiu A\n";
			if (a[i]->getLoai() == 5) cout << "Bat on cam xuc N\n";
		}
	}
};
class danh_sach {
private:
	vector<nguoi> a;
	int n;
public:
	void nhap() {
		cin >> n;
		a.resize(n);
		for (int i = 0; i < n; i++)
		{
			a[i].nhap();
		}
	}
	void xuat()
	{
		for (int i = 0; i < n; i++)
		{
			a[i].xuat();
		}
	}
	void xuat_du_lieu()
	{
		int x; cin >> x;
		a[x].xuat_du_lieu();
	}
	void luu_y()
	{
		for (int i = 0; i < n; i++)
		{
			if (a[i].LuuY() == 1) cout << a[i].getName()<<"\n";
		}
	}
};
int main()
{
	nguoi a;
	a.nhap();
	a.xuat();
	danh_sach b;
	b.nhap();
	b.xuat();
	b.xuat_du_lieu();
	b.luu_y();
	return 0;
}