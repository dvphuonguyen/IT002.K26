#include <iostream>
#include <string>
#include<vector>
using namespace std;
class Tho {
protected:
	int iLoaiTho;
	string sTenLoaiTho;
	string sTenGiacGia;
	string sTenSach;
	int iSoCau;
	vector<vector<string>> vBaiTho;
	vector<string> BaiTho;
public:
	Tho()
	{
		this->iLoaiTho = 0;
		this->sTenLoaiTho = "";
		this->sTenGiacGia = "";
		this->sTenSach = "";
		this->iSoCau = 0;
	}
	virtual void Input()
	{
		cout << "Nhap ten tac gia: "; getline(cin, this->sTenGiacGia);
		cout << "Nhap ten sach : "; getline(cin, this->sTenSach);
		cout << "Nhap so luong cap cau tho: "; cin >> this->iSoCau;
	}
	virtual void Input1()
	{
		cout << "Nhap ten tac gia: "; getline(cin, this->sTenGiacGia);
		cout << "Nhap ten sach : "; getline(cin, this->sTenSach);
		cout << "Nhap so luong cap cau tho: "; cin >> this->iSoCau;
	}
	virtual void Output()
	{
		cout << this->sTenLoaiTho << " - " << this->sTenGiacGia << " - " << this->sTenSach << "\n";
	}
	virtual void Output1()
	{
		cout << this->sTenLoaiTho << " - " << this->sTenGiacGia << " - " << this->sTenSach << "\n";
	}
	virtual void getTenBaiTho_TacGia() {
		cout<< this->sTenGiacGia << " - " << this->sTenSach << "\n";
	}
	virtual int getCau()
	{
		return this->iSoCau;
	}
	~Tho()
	{

	}
};

class LucBat :public Tho {
public:
	LucBat()
	{
		Tho();
		this->iLoaiTho = 1;
		this->sTenLoaiTho = "Luc bat";
	}
	void getTenBaiTho_TacGia() {
		cout << this->sTenGiacGia << " - " << this->sTenSach << "\n";
	}
	int getCau()
	{
		return this->iSoCau;
	}
	void Input()
	{
		cout << "So luong cau tho luon la so chan\n";
		Tho::Input();
		this->vBaiTho.resize(this->iSoCau);
		for (int i = 0; i < this->iSoCau; i++)
		{
			if (i % 2 == 0)
			{
				this->vBaiTho[i].resize(6);
			}
			else this->vBaiTho[i].resize(8);
			for (int j = 0; j < this->vBaiTho[i].size(); j++)
			{
				cin >> this->vBaiTho[i][j];
			}
		}
	}
	void Input1()
	{
		cout << "So luong cau tho luon la so chan\n";
		Tho::Input1();
		this->BaiTho.resize(this->iSoCau);
		cin.ignore();
		for (int i = 0; i < this->iSoCau; i++)
		{
			getline(cin, this->BaiTho[i]);
		}
	}
	void Output()
	{
		Tho::Output();
		for (int i = 0; i < this->iSoCau; i++)
		{
			for (int j = 0; j < this->vBaiTho[i].size(); j++)
			{
				cout << this->vBaiTho[i][j] << " ";
			}
			cout << "\n";
		}
	}
	void Output1()
	{
		Tho::Output1();
		for (int i = 0; i < this->iSoCau; i++)
		{
			cout << this->BaiTho[i]<< "\n";
		}
	}
};

class SongThatLucBat : public Tho
{
public:
	SongThatLucBat()
	{
		Tho();
		this->iLoaiTho = 2;
		this->sTenLoaiTho = "Song that luc bat";
	}
	void getTenBaiTho_TacGia() {
		cout << this->sTenGiacGia << " - " << this->sTenSach << "\n";
	}
	int getCau()
	{
		return this->iSoCau;
	}
	void Input()
	{
		cout << "So luong cau tho luon la chia het cho bon\n";
		Tho::Input();
		this->vBaiTho.resize(this->iSoCau);
		for (int i = 0; i < this->iSoCau; i += 4)
		{
			this->vBaiTho[i].resize(7);
			for (int j = 0; j < this->vBaiTho[i].size(); j++)
			{
				cin >> this->vBaiTho[i][j];
			}
			this->vBaiTho[i + 1].resize(7);
			for (int j = 0; j < this->vBaiTho[i + 1].size(); j++)
			{
				cin >> this->vBaiTho[i][j];
			}
			this->vBaiTho[i + 2].resize(6);
			for (int j = 0; j < this->vBaiTho[i + 2].size(); j++)
			{
				cin >> this->vBaiTho[i][j];
			}
			this->vBaiTho[i + 3].resize(8);
			for (int j = 0; j < this->vBaiTho[i + 3].size(); j++)
			{
				cin >> this->vBaiTho[i][j];
			}
		}
	}
	void Input1()
	{
		cout << "So luong cau tho luon la chia het cho bon\n";
		Tho::Input1();
		this->BaiTho.resize(this->iSoCau);
		cin.ignore();
		for (int i = 0; i < this->iSoCau; i += 4)
		{
			getline(cin, this->BaiTho[i]);
		}
	}
	void Output1()
	{
		Tho::Output1();
		for (int i = 0; i < this->iSoCau; i++)
		{
			cout << this->BaiTho[i] << "\n";
		}
	}
	void Output()
	{
		Tho::Output();
		for (int i = 0; i < this->iSoCau; i++)
		{
			for (int j = 0; j < this->vBaiTho[i].size(); j++)
			{
				cout << this->vBaiTho[i][j] << " ";
			}
			cout << "\n";
		}
	}
};

class DuongLuatThatNgonBatCu :public Tho {
public:
	DuongLuatThatNgonBatCu()
	{
		Tho();
		this->iLoaiTho = 3;
		this->sTenLoaiTho = "Duong luat that ngon bat cu";
	}
	void getTenBaiTho_TacGia() {
		cout << this->sTenGiacGia << " - " << this->sTenSach << "\n";
	}
	int getCau()
	{
		return this->iSoCau;
	}
	void Input()
	{
		cout << "So luong cau tho luon bang tam\n";
		Tho::Input();
		this->vBaiTho.resize(this->iSoCau);
		for (int i = 0; i < this->iSoCau; i++)
		{
			this->vBaiTho[i].resize(7);
			for (int j = 0; j < this->vBaiTho[i].size(); j++)
			{
				cin >> this->vBaiTho[i][j];
			}
		}
	}
	void Input1()
	{
		cout << "So luong cau tho luon bang tam\n";
		Tho::Input1();
		this->BaiTho.resize(this->iSoCau);
		cin.ignore();
		for (int i = 0; i < this->iSoCau; i++)
		{
			getline(cin, this->BaiTho[i]);
		}
	}
	void Output()
	{
		Tho::Output();
		for (int i = 0; i < this->iSoCau; i++)
		{
			for (int j = 0; j < this->vBaiTho[i].size(); j++)
			{
				cout << this->vBaiTho[i][j] << " ";
			}
			cout << "\n";
		}
	}
	void Output1()
	{
		Tho::Output1();
		for (int i = 0; i < this->iSoCau; i++)
		{
			cout << this->BaiTho[i] << "\n";
		}
	}
};

class TapTho {
private:
	vector<Tho*> baiTho;
public:
	TapTho()
	{

	}
	void Input()
	{
		cout << "Meunu:\n\tNhap 0 de dung qua trinh nhap tho\n\tNhap 1 de tiep tuc tho bat cu\n\tNhap 2 de tiep tuc tho song that luc bat\n\tNhap 3 de tiep tuc tho that ngon bat cu\n";
		int x;
		while (true)
		{
			cout << "Nhap gia tri x: "; cin >> x;
			Tho* b = NULL;
			if (x == 0) break;
			else if (x == 1)
			{
				b = new LucBat();
			}
			else if (x == 2)
			{
				b = new SongThatLucBat();
			}
			else b = new DuongLuatThatNgonBatCu();
			cin.ignore();
			b->Input1();
			this->baiTho.push_back(b);
		}
	}
	void Output()
	{
		for (int i = 0; i < this->baiTho.size(); i++)
		{
			this->baiTho[i]->Output1();
			cout << "\n";
		}
	}
	void XuatBaiThoDaiNhat()
	{
		int m = 0;
		for (int i = 1; i < this->baiTho.size(); i++)
		{
			if (this->baiTho[i]->getCau() > this->baiTho[m]->getCau()) m = i;
		}
		cout << "Bai tho dai nhat la: ";
		this->baiTho[m]->getTenBaiTho_TacGia();
	}
	~TapTho()
	{

	}
};
int main()
{
	TapTho a;
	a.Input();
	a.Output();
	a.XuatBaiThoDaiNhat();
	return 0;
}