#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CTuong
{
protected:
	string sTenTuong;
	int iSatThuong;
	int iLoaiTuong;
public:
	CTuong()
	{
		this->iSatThuong = 0;
		this->sTenTuong = "";
		this->iLoaiTuong = 0;
	}
	virtual void Input()
	{
		cin >> this->iSatThuong;
		this->iSatThuong += 10;
	}
	virtual void Output(int iSoLuot)
	{
		cout << "Sat thuong gay ra: " << this->SatThuong(iSoLuot) << "\n";
	}
	virtual int SatThuong(int iSoLuot)
	{
		return 0;
	}
	~CTuong()
	{

	}

};

class CShaco :public CTuong
{
private:
public:
	CShaco()
	{
		CTuong();
		this->iLoaiTuong = 1;
		this->sTenTuong = "Shaco";
	}
	void Output(int iSoLuot)
	{
		cout << this->sTenTuong << " - ";
		CTuong::Output(iSoLuot);
	}
	int SatThuong(int iSoLuot)
	{
		return this->iSatThuong * 2 * iSoLuot;
	}
	~CShaco()
	{

	}
};

class CZed :public CTuong
{
private:
public:
	CZed()
	{
		CTuong();
		this->iLoaiTuong = 2;
		this->sTenTuong = "Zed";
	}
	void Output(int iSoLuot)
	{
		cout << this->sTenTuong << " - ";
		CTuong::Output(iSoLuot);
	}
	int SatThuong(int iSoLuot)
	{
		return this->iSatThuong * 3 * (iSoLuot / 3) + this->iSatThuong * (iSoLuot - iSoLuot / 3);
	}
	~CZed()
	{

	}
};
int main()
{
	int iSoLuong;
	cin >> iSoLuong;
	vector<CTuong*> a;
	a.resize(iSoLuong);
	for (int i = 0; i < iSoLuong; i++)
	{
		int x;
		cin >> x;
		if (x == 1)
		{
			a[i] = new CShaco();
		}
		else
		{
			a[i] = new CZed();
		}
		a[i]->Input();
	}
	int iSoLuot;
	cin >> iSoLuot;
	for (int i = 0; i < iSoLuong; i++)
	{
		a[i]->Output(iSoLuot);
	}
	return 0;
}