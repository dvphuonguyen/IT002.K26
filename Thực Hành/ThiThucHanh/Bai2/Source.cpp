#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CChiecThuyenNgoaiXa
{
protected:
	string sSoHieu;
	string sTenLoaiThuyen;
	int iSoLuongThuyenVien;
	int iLoaiThuyen;
public:
	CChiecThuyenNgoaiXa()
	{
		this->sSoHieu = "";
		this->sTenLoaiThuyen = "";
		this->iLoaiThuyen = 0;
		this->iSoLuongThuyenVien = 0;
	}
	virtual void Input()
	{
		cin >> this->sSoHieu;
		cin >> this->iSoLuongThuyenVien;
	}
	virtual void Output()
	{
		cout << this->sSoHieu << " - " << this->sTenLoaiThuyen << " - " << this->iSoLuongThuyenVien << " thuyen vien - ";
	}
	~CChiecThuyenNgoaiXa()
	{

	}
};

class CGhe :public CChiecThuyenNgoaiXa
{
private:
	int iDongCo;
public:
	CGhe()
	{
		CChiecThuyenNgoaiXa();
		this->iLoaiThuyen = 1;
		this->iDongCo = 0;
		this->sTenLoaiThuyen = "Ghe";
	}
	void Input()
	{
		CChiecThuyenNgoaiXa::Input();
		cin >> this->iDongCo;
	}
	void Output()
	{
		CChiecThuyenNgoaiXa::Output();
		if (this->iDongCo == 1)
		{
			cout << "Co Dong Co\n";
		}
		else
		{
			cout << "\n"; 
		}
	}
	~CGhe()
	{

	}
};

class CThuyenThuong :public CChiecThuyenNgoaiXa
{
private:
	string sHangDong;
public:
	CThuyenThuong()
	{
		CChiecThuyenNgoaiXa();
		this->sHangDong = "";
		this->iLoaiThuyen = 2;
		this->sTenLoaiThuyen = "Thuyen thuong";
	}
	void Input()
	{
		CChiecThuyenNgoaiXa::Input();
		cin >> this->sHangDong;
	}
	void Output()
	{
		CChiecThuyenNgoaiXa::Output();
		cout << this->sHangDong << "\n";
	}
	~CThuyenThuong()
	{

	}
};

class CThuyenLon :public CChiecThuyenNgoaiXa
{
private: 
	string sHangDong;
	int iPhamViRaKhoi;
public:
	CThuyenLon()
	{
		CChiecThuyenNgoaiXa();
		this->sHangDong = "";
		this->iPhamViRaKhoi = 0;
		this->iLoaiThuyen = 3;
		this->sTenLoaiThuyen = "Thuyen lon";
	}
	void Input()
	{
		CChiecThuyenNgoaiXa::Input();
		cin >> this->sHangDong;
		cin >> this->iPhamViRaKhoi;
	}
	void Output()
	{
		CChiecThuyenNgoaiXa::Output();
		cout << this->sHangDong << " - " << this->iPhamViRaKhoi << "m\n";
	}
	~CThuyenLon()
	{

	}
};

class CQuanLy
{
private:
	int iSoLuongThuyen;
	vector<CChiecThuyenNgoaiXa*> vThuyen;
public:
	CQuanLy()
	{
		this->iSoLuongThuyen = 0;
	}
	void Input()
	{
		cin >> this->iSoLuongThuyen;
		vThuyen.resize(this->iSoLuongThuyen);
		for (int i = 0; i < this->iSoLuongThuyen; i++)
		{
			int iLoaiThuyen;
			cin >> iLoaiThuyen;
			if (iLoaiThuyen == 1)
			{
				vThuyen[i] = new CGhe();
			}
			else if (iLoaiThuyen == 2)
			{
				vThuyen[i] = new CThuyenThuong();
			}
			else
			{
				vThuyen[i] = new CThuyenLon();
			}
			vThuyen[i]->Input();
		}
	}
	void Output()
	{
		for (int i = 0; i < this->iSoLuongThuyen; i++)
		{
			vThuyen[i]->Output();
		}
	}
	~CQuanLy()
	{

	}
};
int main()
{
	CQuanLy cQuanLy;
	cQuanLy.Input();
	cQuanLy.Output();
	return 0;
}

