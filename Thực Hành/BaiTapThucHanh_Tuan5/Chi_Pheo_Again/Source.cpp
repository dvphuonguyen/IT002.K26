#include <iostream>
#include <string>
#include <vector>
#define PI 3.14
using namespace std;
class CChai
{
protected:
	int iType;
public:
	CChai()
	{
		this->iType = 0;
	}
	virtual float DienTich()
	{
		return 0;
	}
	virtual float LuongNuoc()
	{
		return 0;
	}
	virtual void Input()
	{

	}
	virtual void Output()
	{
	}
	~CChai()
	{

	}
};

class CChaiHinhTruTron :public CChai
{
private:
	int iChieuCao;
	int iBanKinhDay;
public:
	CChaiHinhTruTron()
	{
		this->iBanKinhDay = 0;
		this->iChieuCao = 0;
		this->iType = 1;
	}
	void Input()
	{
		cin >> this->iChieuCao >> this->iBanKinhDay;
	}
	float DienTich()
	{
		return 2 * PI * this->iBanKinhDay * this->iChieuCao;
	}
	float LuongNuoc()
	{
		return PI * this->iBanKinhDay * this->iBanKinhDay * this->iChieuCao;
	}
	void Output()
	{
		CChai::Output();
	}
	~CChaiHinhTruTron()
	{

	}
};

class CChaiHinhHopChuNhat :public CChai
{
private:
	int iChieuCao;
	int iChieuDai;
	int iChieuRong;
public:
	CChaiHinhHopChuNhat()
	{
		this->iChieuDai = 0;
		this->iChieuRong = 0;
		this->iChieuCao = 0;
		this->iType = 2;
	}
	void Input()
	{
		cin >> this->iChieuCao >> this->iChieuDai >> this->iChieuRong;
	}
	float DienTich()
	{
		return 2 * (this->iChieuCao * this->iChieuDai + this->iChieuCao * this->iChieuRong + this->iChieuDai * this->iChieuRong);
	}
	float LuongNuoc()
	{
		return this->iChieuCao * this->iChieuDai * this->iChieuRong;
	}
	void Output()
	{
		CChai::Output();
	}
	~CChaiHinhHopChuNhat()
	{

	}
};

class CChaiHinhLapPhuong :public CChai
{
private:
	int iDoDaiCanh;
;
public:
	CChaiHinhLapPhuong()
	{
		this->iDoDaiCanh = 0;
		this->iType = 3;
	}
	void Input()
	{
		cin >> this->iDoDaiCanh;
	}
	float DienTich()
	{
		return this->iDoDaiCanh * this->iDoDaiCanh * 6;
	}
	float LuongNuoc()
	{
		return this->iDoDaiCanh * this->iDoDaiCanh * this->iDoDaiCanh;
	}
	void Output()
	{
		CChai::Output();
	}
	~CChaiHinhLapPhuong()
	{

	}
};

class CQuanLy
{
private:
	vector<CChai*> vChai;
	int iSoLuong;
public:
	CQuanLy()
	{
		this->iSoLuong = 0;
	}
	void Input()
	{
		cin >> this->iSoLuong;
		vChai.resize(this->iSoLuong);
		for (int i = 0; i < this->iSoLuong; i++)
		{
			int x;
			cin >> x;
			if (x == 1)
			{
				vChai[i] = new CChaiHinhTruTron();
			}
			else if (x == 2)
			{
				vChai[i] = new CChaiHinhHopChuNhat();
			}
			else
			{
				vChai[i] = new CChaiHinhLapPhuong();
			}
			vChai[i]->Input();
		}
	}
	void Output()
	{
		float fDienTich = 0;
		float fLuongNuoc = 0;
		for (int i = 0; i < this->iSoLuong; i++)
		{
			fDienTich += vChai[i]->DienTich();
			fLuongNuoc += vChai[i]->LuongNuoc();
		}
		cout << "Dien tich chai vo: " << fDienTich << "\n";
		cout << "Luong nuoc tren mat dat: " << fLuongNuoc * 0.1 << "\n";
	}
};
int main()
{
	CQuanLy a;
	a.Input();
	a.Output();
	return 0;
}