#include <iostream>
#include <vector>
#include <string>
using namespace std;
class cCaSi {
protected:
	string sName;
	string sLoaiCaSi;
	int iSoNamLamViec;
	int iSoDiaBanDuoc;
	int iSoBuoiTrinhDien;
	int iLoaiCaSi;
public:
	cCaSi()
	{
		this->sName = "";
		this->sLoaiCaSi = "";
		this->iLoaiCaSi = 0;
		this->iSoBuoiTrinhDien = 0;
		this->iSoDiaBanDuoc = 0;
		this->iSoNamLamViec = 0;
	}
	virtual void Input()
	{
		cout << "Nhap ho ten ca si: "; getline(cin, this->sName);
		cout << "Nhap so nam lam viec cho cong ty: "; cin >> this->iSoNamLamViec;
		cout << "Nhap so dia ban duoc: "; cin >> this->iSoDiaBanDuoc;
		cout << "Nhap so buoi trinh dien da tham gia: "; cin >> this->iSoBuoiTrinhDien;
	}
	virtual float Luong() = 0;
	virtual void Output()
	{
		cout << this->sLoaiCaSi << " - " << this->sName << " - " << this->iSoNamLamViec << " - " << this->iSoDiaBanDuoc << " - " << this->iSoBuoiTrinhDien;
	}
	~cCaSi()
	{

	}
};
class cCaSiChuaNoiTieng :public cCaSi
{
private:
public:
	cCaSiChuaNoiTieng()
	{
		//cCaSi();
		this->iLoaiCaSi = 1;
		this->sLoaiCaSi = "Ca si chua noi tieng";
	}
	void Input()
	{
		cCaSi::Input();
	}
	float Luong()
	{
		return 3000000 + 500000 * this->iSoNamLamViec + 1000 * this->iSoDiaBanDuoc + 200000 * this->iSoBuoiTrinhDien;
	}
	void Output()
	{
		cCaSi::Output();
		cout << " - " << this->Luong();
		cout << "\n";
	}
	~cCaSiChuaNoiTieng()
	{

	}
};
class cCaSiNoiTieng :public cCaSi
{
private:
	int iSoGameshow;
public:
	cCaSiNoiTieng()
	{
		//cCaSi();
		this->iSoGameshow = 0;
		this->iLoaiCaSi = 2;
		this->sLoaiCaSi = "Ca si noi tieng";
	}
	void Input()
	{
		cCaSi::Input();
		cout << "Nhap so gameshow: "; cin >> this->iSoGameshow;
	}
	float Luong()
	{
		return 5000000 + 500000 * this->iSoNamLamViec + 1200 * this->iSoDiaBanDuoc + 500000 * this->iSoBuoiTrinhDien + 500000 * this->iSoGameshow;
	}
	void Output()
	{
		cCaSi::Output();
		cout << " - " << this->iSoGameshow;
		cout << " - " << this->Luong();
		cout << "\n";
	}
	~cCaSiNoiTieng()
	{

	}
};
int main()
{
	vector<cCaSi*> a;
	int x;
	cout << "Menu:\n\tNhap 0 de dung chuong trinh\n\tNhap 1 cho ca si chua noi tieng\n\tNhap 2 cho ca si da noi tieng\n";
	while (true)
	{
		cCaSi* b = NULL;
		cout << "Nhap gia tri: "; cin >> x;
		if (x == 0)break;
		else if (x == 1) b = new cCaSiChuaNoiTieng();
		else b = new cCaSiNoiTieng();
		cin.ignore();
		b->Input();
		a.push_back(b);
	}
	cout << "\t\t\t\tXUAT\n";
	for (int i = 0; i < a.size(); i++)
	{
		a[i]->Output();
	}
	
	int max = 0;
	for (int i = 1; i < a.size(); i++)
	{
		if (a[i]->Luong() > a[max]->Luong())
		{
			max = i;
		}
	}
	cout << "Ca si co luong cao nhat la: \n";
	a[max]->Output();
	return 0;
}