#include <iostream>
#include <vector>
#include <string>
using namespace std;
class cCong {
protected:
	int iLoaiCong;
	string sTenCong;
	string sNguoiGac;
public:
	cCong() {
		this->iLoaiCong = 0;
		this->sTenCong = "";
		this->sNguoiGac = "";
	}
	virtual void Input()
	{
		
	}
	virtual void Output()
	{
		cout << this->sTenCong << " - " << this->sNguoiGac << " - ";
	}
	virtual float DieuKienQuaCong(float &x)
	{
		return 0;
	}
	~cCong()
	{

	}
};
class cGiaoThuong :public cCong
{
private:
	float fDonGia;
	int iSoHang;
public:
	cGiaoThuong()
	{
		//cCong();
		this->iLoaiCong = 1;
		this->sTenCong = "Giao thuong";
		this->sNguoiGac = "Ten buon lai";
		this->fDonGia = 0;
		this->iSoHang = 0;
	}
	void Input()
	{
		cCong::Input();
		cout << "Nhap don gia: "; cin >> this->fDonGia;
		cout << "Nhap so hang: "; cin >> this->iSoHang;
	}
	void Output()
	{
		cCong::Output();
		cout << this->fDonGia << " - " << this->iSoHang << "\n";
	}
	float DieuKienQuaCong(float &x)
	{
		x -= this->fDonGia * this->iSoHang;
		return this->fDonGia * this->iSoHang;
	}

};
class cHocThuat :public cCong
{
private:
	float fTriTue;
public:
	cHocThuat()
	{
		//cCong();
		this->iLoaiCong = 2;
		this->sTenCong = "Hoc thuat";
		this->sNguoiGac = "Nha hien triet";
		this->fTriTue = 0;
	}
	void Input()
	{
		cCong::Input();
		cout << "Nhap tri tue cau hoi: "; cin >> this->fTriTue;
	}
	void Output()
	{
		cCong::Output();
		cout << this->fTriTue << "\n";
	}
	float DieuKienQuaCong(float &x)
	{
		if (x >= this->fTriTue) {
			return 1;
		}
		else return 0;
	}
};
class cSucManh :public cCong
{
private:
	float fSucManh;
public:
	cSucManh()
	{
		//cCong();
		this->iLoaiCong = 3;
		this->sTenCong = "Suc manh";
		this->sNguoiGac = "Dung si";
		this->fSucManh = 0;
	}
	void Input()
	{
		cCong::Input();
		cout << "Nhap suc manh dung si "; cin >> this->fSucManh;
	}
	void Output()
	{
		cCong::Output();
		cout << this->fSucManh << "\n";
	}
	float DieuKienQuaCong(float &x)
	{
		if (x >= this->fSucManh) {
			x -= this->fSucManh;
			return 1;
		}
		else return 0;
	}
};
class NCong {
private:
	vector<cCong*> a;
public:
	NCong() {

	}
	void Input()
	{
		cout << "\tMenu: \nCong thu nhat la cong Giao thuong\nCong thu hai la cong Hoc thuat\nCong thu ba la cong Suc manh\n";
		int i = 0;
		while (i < 3)
		{
			cCong* b = NULL;
			if (i == 0)
			{
				b = new cGiaoThuong();
			}
			else if (i == 1)
			{
				b = new cHocThuat();
			}
			else {
				b = new cSucManh();
			}
			b->Input();
			a.push_back(b);
			i += 1;
		}
	}
	void Output()
	{
		for (int i = 0; i < a.size(); i++)
		{
			a[i]->Output();
		}
	}
	void ChoBietKetQua()
	{
		float Tien;
		float TriTue;
		float SoSucManh;
		cout << "Nhap so tien cua hoang tu: "; cin >> Tien;
		float t = Tien;
		cout << "Nhap tri tue cua hoang tu : "; cin >> TriTue;
		float tt = TriTue;
		cout << "Nhap suc manh cua hoang tu : "; cin >> SoSucManh;
		float sm = SoSucManh;
		if (t >= a[0]->DieuKienQuaCong(Tien) && a[1]->DieuKienQuaCong(TriTue) == 1 && a[2]->DieuKienQuaCong(SoSucManh) == 1)
		{
			cout << "Cuu duoc cong chua\n";
			cout << "Cac gia tri con lai: ";
			cout << "\nTien = " << Tien;
			cout << "\nTri tue = " << TriTue;
			cout << "\nSuc manh = " << SoSucManh;
		}
		else {
			cout << "Khong cuu duoc cong chua\n";
			cout << "Cac gia tri con lai: ";
			cout << "\nTien = " << Tien;
			cout << "\nTri tue = " << TriTue;
			cout << "\nSuc manh = " << SoSucManh;
		}
	}
	~NCong()
	{

	}
};
int main()
{
	NCong a;
	a.Input();
	a.Output(); 
	a.ChoBietKetQua();
	return 0;
}