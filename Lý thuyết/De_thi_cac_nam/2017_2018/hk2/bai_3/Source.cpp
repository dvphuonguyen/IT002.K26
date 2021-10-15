#include<iostream>
#include<vector>
#include <string>
using namespace std;
class cNhomMau
{
protected:
	int iLoaiMau;
	string sTenNhommau;
	int iLoaiRH;
	string sName;
public:
	cNhomMau()
	{
		this->iLoaiMau = this->iLoaiRH = 0;
		this->sTenNhommau = "";
		this->sName == "";
	}
	virtual void Input()
	{
		cout << "Nhap ten cua nguoi so huu nhom mau: "; getline(cin, this->sName);
		cout << "Nhap loai Rh trong nhom mau: "; cin >> this->iLoaiRH;
	}
	virtual void Output()
	{
		cout << this->sTenNhommau;
		if (this->iLoaiRH == 1) cout << "+\n";
		else cout << "-\n";
	}
	virtual int getLoaiMau()
	{
		return this->iLoaiMau;
	}
	virtual int getLoaiRh()
	{
		return this->iLoaiRH;
	}
	~cNhomMau()
	{

	}
};
class cNhomO :public cNhomMau {
private:
public:
	cNhomO()
	{
		cNhomMau();
		this->iLoaiMau = 1;
		this->sTenNhommau = "O";
	}
	void Input()
	{
		cNhomMau::Input();
	}
	void Output()
	{
		cNhomMau::Output();
	}
	int getLoaiMau()
	{
		return this->iLoaiMau;
	}
	int getLoaiRh()
	{
		return this->iLoaiRH;
	}
	~cNhomO()
	{

	}
};
class cNhomA :public cNhomMau {
private:
public:
	cNhomA()
	{
		cNhomMau();
		this->iLoaiMau = 2;
		this->sTenNhommau = "A";
	}
	int getLoaiRh()
	{
		return this->iLoaiRH;
	}
	void Input()
	{
		cNhomMau::Input();
	}
	void Output()
	{
		cNhomMau::Output();
	}
	int getLoaiMau()
	{
		return this->iLoaiMau;
	}
	~cNhomA()
	{

	}
};
class cNhomB :public cNhomMau {
private:
public:
	cNhomB()
	{
		cNhomMau();
		this->iLoaiMau = 3;
		this->sTenNhommau = "B";
	}
	int getLoaiRh()
	{
		return this->iLoaiRH;
	}
	void Input()
	{
		cNhomMau::Input();
	}
	void Output()
	{
		cNhomMau::Output();
	}
	int getLoaiMau()
	{
		return this->iLoaiMau;
	}
	~cNhomB()
	{

	}
};
class cNhomAB :public cNhomMau {
private:
public:
	cNhomAB()
	{
		cNhomMau();
		this->iLoaiMau = 4;
		this->sTenNhommau = "AB";
	}
	int getLoaiRh()
	{
		return this->iLoaiRH;
	}
	void Input()
	{
		cNhomMau::Input();
	}
	void Output()
	{
		cNhomMau::Output();
	}
	int getLoaiMau()
	{
		return this->iLoaiMau;
	}
	~cNhomAB()
	{

	}
};
class cPeople {
private:
	vector<cNhomMau*> nguoi;
public:
	cPeople()
	{
		
	}
	void Input()
	{
		cout << "Menu nhom mau:\n";
		cout << "\tNhap 0 de dung chuong trinh\n";
		cout << "\tNhap 1 doi voi nguoi so huu nhom mau O\n";
		cout << "\tNhap 2 doi voi nguoi so huu nhom mau A\n";
		cout << "\tNhap 3 doi voi nguoi so huu nhom mau B\n";
		cout << "\tNhap 4 doi voi nguoi so huu nhom mau AB\n";
		cout << "Menu loai Rh:\n";
		cout << "\t\tNhap 1 doi voi Rh+\n";
		cout << "\t\tNhap 2 doi voi Rh-\n";
		while (true)
		{
			cout << "Nhap gia tri xet nhom mau: ";
			int x; cin >> x;
			cNhomMau* b = NULL;
			if (x == 0) break;
			if (x == 1) b = new cNhomO();
			if (x == 2) b = new cNhomA();
			if (x == 3) b = new cNhomB();
			if (x == 4) b = new cNhomAB();
			cin.ignore();
			b->Input();
			nguoi.push_back(b);
		}	
	}
	void Output()
	{
		for (int i = 0; i < nguoi.size(); i++)
		{
			nguoi[i]->Output();
		}
	}
	int XetChoMau(cNhomMau* a, cNhomMau* b)
	{
		//a :cho//b: nhan
		if (a->getLoaiMau() == 1) {
			if (a->getLoaiRh() == 2) return 1;
			else {
				if (b->getLoaiRh() == 1) return 1;
			}
		}
		else if (a->getLoaiMau() == 2 && (b->getLoaiMau() == 2 || b->getLoaiMau() == 4)) {
			if (a->getLoaiRh() == 2)return 1;
			else {
				if (b->getLoaiRh() == 1) return 1;
			}
		}
		else if (a->getLoaiMau() == 3 && (b->getLoaiMau() == 3 || b->getLoaiMau() == 4)) {
			if (a->getLoaiRh() == 2)return 1;
			else {
				if (b->getLoaiRh() == 1) return 1;
			}
		}
		else if (a->getLoaiMau() == 4 && (b->getLoaiMau() == 4)) {
			if (a->getLoaiRh() == 2)return 1;
			else {
				if (b->getLoaiRh() == 1) return 1;
			}
		}
		return 0;
	}
	void ChoMau()
	{
		for (int i = 1; i < nguoi.size(); i++)
		{
			if (XetChoMau(nguoi[i], nguoi[0]) == 1) cout << "Nguoi thu " << i + 1 << " co the cho mau nguoi thu nhat\n";
		}
	}
	~cPeople()
	{

	}
};
class cGiaDinh {
private:
	vector<cNhomMau*> giaDinh;
public:
	cGiaDinh() {
	}
	void Input()
	{
		cout << "Menu nhom mau:\n";
		cout << "\tNhap 0 de dung chuong trinh\n";
		cout << "\tNhap 1 doi voi nguoi so huu nhom mau O\n";
		cout << "\tNhap 2 doi voi nguoi so huu nhom mau A\n";
		cout << "\tNhap 3 doi voi nguoi so huu nhom mau B\n";
		cout << "\tNhap 4 doi voi nguoi so huu nhom mau AB\n";
		cout << "Menu loai Rh:\n";
		cout << "\t\tNhap 1 doi voi Rh+\n";
		cout << "\t\tNhap 2 doi voi Rh-\n";
		cout << "Nhap theo thu tu : Bo_ Me_ Con\n";
		for (int i = 0; i < 3; i++) {
			cout << "Nhap gia tri xet nhom mau: ";
			int x; cin >> x;
			cNhomMau* b = NULL;
			if (x == 1) b = new cNhomO();
			if (x == 2) b = new cNhomA();
			if (x == 3) b = new cNhomB();
			if (x == 4) b = new cNhomAB();
			cin.ignore();
			b->Input();
			giaDinh.push_back(b);
		}
	}
	void outPut()
	{
		for (int i = 0; i < giaDinh.size(); i++) {
			if (i == 0) {
				cout << "Bo: ";
				//giaDinh[i]->Output();
			}
			else if (i == 1) {
				cout << "Me: ";
				//giaDinh[i]->Output();
			}
			else {
				//cout << "Con: ";
				//giaDinh[i]->Output();
			}

			giaDinh[i]->Output();
		}
		if (CheckQuanHe() == 1) cout << "Ba me vaf con co cung huyet thong\n";
		else cout << "Ba me vaf con khong cung huyet thong\n";
	}
	int CheckQuanHe()
	{
		//0
		if (giaDinh[0]->getLoaiMau() == 1 && giaDinh[1]->getLoaiMau() == 1)
		{
			if (giaDinh[2]->getLoaiMau() == 1) return 1;
		}
		else if (giaDinh[0]->getLoaiMau() == 1 && giaDinh[1]->getLoaiMau() == 2) {
			if (giaDinh[2]->getLoaiMau() == 1 || giaDinh[2]->getLoaiMau() == 2) return 1;
		}
		else if (giaDinh[0]->getLoaiMau() == 1 && giaDinh[1]->getLoaiMau() == 3) {
			if (giaDinh[2]->getLoaiMau() == 1 || giaDinh[2]->getLoaiMau() == 3) return 1;
		}
		else if (giaDinh[0]->getLoaiMau() == 1 && giaDinh[1]->getLoaiMau() == 4) {
			if (giaDinh[2]->getLoaiMau() == 3 || giaDinh[2]->getLoaiMau() == 2) return 1;
		}
		//a
		else if (giaDinh[0]->getLoaiMau() == 2 && giaDinh[1]->getLoaiMau() == 1)
		{
			if (giaDinh[2]->getLoaiMau() == 1 || giaDinh[2]->getLoaiMau() == 2) return 1;
		}
		else if (giaDinh[0]->getLoaiMau() == 2 && giaDinh[1]->getLoaiMau() == 2) {
			if (giaDinh[2]->getLoaiMau() == 1 || giaDinh[2]->getLoaiMau() == 2) return 1;
		}
		else if (giaDinh[0]->getLoaiMau() == 2 && giaDinh[1]->getLoaiMau() == 3) {
			return 1;
		}
		else if (giaDinh[0]->getLoaiMau() == 2 && giaDinh[1]->getLoaiMau() == 4) {
			if (giaDinh[2]->getLoaiMau() == 3 || giaDinh[2]->getLoaiMau() == 2 || giaDinh[2]->getLoaiMau() == 4) return 1;
		}
		//b
		else if (giaDinh[0]->getLoaiMau() == 3 && giaDinh[1]->getLoaiMau() == 1)
		{
			if (giaDinh[2]->getLoaiMau() == 1 || giaDinh[2]->getLoaiMau() == 3) return 1;
		}
		else if (giaDinh[0]->getLoaiMau() == 3 && giaDinh[1]->getLoaiMau() == 2) {
			return 1;
		}
		else if (giaDinh[0]->getLoaiMau() == 3 && giaDinh[1]->getLoaiMau() == 3) {
			if (giaDinh[2]->getLoaiMau() == 3 || giaDinh[2]->getLoaiMau() == 1) return 1;
		}
		else if (giaDinh[0]->getLoaiMau() == 3 && giaDinh[1]->getLoaiMau() == 4) {
			if (giaDinh[2]->getLoaiMau() == 3 || giaDinh[2]->getLoaiMau() == 2 || giaDinh[2]->getLoaiMau() == 4) return 1;
		}
		//ab
		else if (giaDinh[0]->getLoaiMau() == 4 && giaDinh[1]->getLoaiMau() == 1)
		{
			if (giaDinh[2]->getLoaiMau() == 2 || giaDinh[2]->getLoaiMau() == 3) return 1;
		}
		else if (giaDinh[0]->getLoaiMau() == 4 && giaDinh[1]->getLoaiMau() == 2) {
			if (giaDinh[2]->getLoaiMau() == 3 || giaDinh[2]->getLoaiMau() == 2 || giaDinh[2]->getLoaiMau() == 4) return 1;
		}
		else if (giaDinh[0]->getLoaiMau() == 4 && giaDinh[1]->getLoaiMau() == 3) {
			if (giaDinh[2]->getLoaiMau() == 3 || giaDinh[2]->getLoaiMau() == 2 || giaDinh[2]->getLoaiMau() == 4) return 1;
		}
		else if (giaDinh[0]->getLoaiMau() == 3 && giaDinh[1]->getLoaiMau() == 4) {
			if (giaDinh[2]->getLoaiMau() == 3 || giaDinh[2]->getLoaiMau() == 2 || giaDinh[2]->getLoaiMau() == 4) return 1;
		}
		return 0;
	}
	~cGiaDinh()
	{

	}
};
int main()
{/*
	cout << "Xet nhom nguoi :\n";
	cPeople a;
	a.Input();
	a.Output();
	a.ChoMau();
	*/
	cout << "Xet gia dinh: \n";
	cGiaDinh b;
	b.Input();
	b.outPut();
	return 0;
}