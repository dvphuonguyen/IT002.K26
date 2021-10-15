#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Quytrinh{
protected:
	int iLoaiQuyTrinh;
	string stenQuyTrinh;
	int iThoiGian;
	int iTien;
	int iBatBuoc;
	int iTuyChon;
public:
	Quytrinh()
	{
		this->iLoaiQuyTrinh = 0;
		this->stenQuyTrinh = "";
		this->iThoiGian = 0;
		this->iTien = 0;
		this->iBatBuoc = 0;
		this->iTuyChon = 0;
	}
	virtual void Input()
	{
	}
	virtual void Output()
	{
		cout << this->stenQuyTrinh << " - " << this->iThoiGian << " - " << this->iTien ;
	}
	virtual int getTien()
	{
		return this->iTien;
	}
	virtual int getThoiGian()
	{
		return this->iThoiGian;
	}
	~Quytrinh()
	{

	}
};
class TayTrang :public Quytrinh {
public:
	TayTrang()
	{
		Quytrinh();
		this->iLoaiQuyTrinh = 1;
		this->stenQuyTrinh = "Tay trang";
		this->iThoiGian = 5;
		this->iBatBuoc = 1;
		this->iTien = 30;
	}
	void Input()
	{
		Quytrinh::Input();
	}
	void Output()
	{
		Quytrinh::Output();
	}
	int getTien()
	{
		return this->iTien;
	}
	int getThoiGian()
	{
		return this->iThoiGian;
	}
};

class RuaMat :public Quytrinh {
public:
	RuaMat()
	{
		Quytrinh();
		this->iLoaiQuyTrinh = 2;
		this->stenQuyTrinh = "Rua mat";
		this->iThoiGian = 10;
		this->iBatBuoc = 1;
		this->iTien = 50;
	}
	void Input()
	{
		Quytrinh::Input();
	}
	void Output()
	{
		Quytrinh::Output();
	}
	int getTien()
	{
		return this->iTien;
	}
	int getThoiGian()
	{
		return this->iThoiGian;
	}
};

class MatNa :public Quytrinh {
public:
	MatNa()
	{
		Quytrinh();
		this->iLoaiQuyTrinh = 3;
		this->stenQuyTrinh = "Mat na";
		this->iThoiGian = 30;
		this->iBatBuoc = 1;
		this->iTien = 100;
	}
	void Input()
	{
		Quytrinh::Input();
	}
	void Output()
	{
		Quytrinh::Output();
	}
	int getTien()
	{
		return this->iTien;
	}
	int getThoiGian()
	{
		return this->iThoiGian;
	}
};

class Toner :public Quytrinh {
public:
	Toner()
	{
		Quytrinh();
		this->iLoaiQuyTrinh = 4;
		this->stenQuyTrinh = "Toner";
		this->iThoiGian = 10;
		this->iBatBuoc = 0;
		this->iTien = 50;
	}
	void Input()
	{
		Quytrinh::Input();
		cout << "Co su dung Toner khong: (1_co\t0_khong) "; cin >> this->iTuyChon;
		if (this->iTuyChon == 0) this->iTien = 0;
	}
	void Output()
	{
		Quytrinh::Output();
	}
	int getTien()
	{
		return this->iTien;
	}
	int getThoiGian()
	{
		return this->iThoiGian;
	}
};

class Serum :public Quytrinh {
public:
	Serum()
	{
		Quytrinh();
		this->iLoaiQuyTrinh =5;
		this->stenQuyTrinh = "Serum";
		this->iThoiGian = 10;
		this->iBatBuoc = 0;
		this->iTien = 50;
	}
	void Input()
	{
		Quytrinh::Input();
		cout << "Co su dung Serum khong: (1_co\t0_khong) "; cin >> this->iTuyChon;
		if (this->iTuyChon == 0) this->iTien = 0;
	}
	void Output()
	{
		Quytrinh::Output();
	}
	int getTien()
	{
		return this->iTien;
	}
	int getThoiGian()
	{
		return this->iThoiGian;
	}
};

class KemDuong :public Quytrinh {
public:
	KemDuong()
	{
		Quytrinh();
		this->iLoaiQuyTrinh = 6;
		this->stenQuyTrinh = "Kem duong";
		this->iThoiGian = 10;
		this->iBatBuoc = 0;
		this->iTien = 50;
	}
	void Input()
	{
		Quytrinh::Input();
		cout << "Co su dung kem duong khong: (1_co\t0_khong) "; cin >> this->iTuyChon;
		if (this->iTuyChon == 0) this->iTien = 0;
	}
	void Output()
	{
		Quytrinh::Output();
	}
	int getTien()
	{
		return this->iTien;
	}
	int getThoiGian()
	{
		return this->iThoiGian;
	}
};

class ChongNang :public Quytrinh {
public:
	ChongNang()
	{
		Quytrinh();
		this->iLoaiQuyTrinh = 7;
		this->stenQuyTrinh = "Chong nang";
		this->iThoiGian = 30;
		this->iBatBuoc = 0;
		this->iTien = 50;
	}
	void Input()
	{
		Quytrinh::Input();
		cout << "Co su dung Chong Nang khong: (1_co\t0_khong) "; cin >> this->iTuyChon;
		if (this->iTuyChon == 0) this->iTien = 0;
	}
	void Output()
	{
		Quytrinh::Output();
	}
	int getTien()
	{
		return this->iTien;
	}
	int getThoiGian()
	{
		return this->iThoiGian;
	}
};

class KhachHang {
private:
	string sName;
	vector<Quytrinh*> quyTrinh;
public:
	KhachHang()
	{
		this->sName = "";
	}
	void Input()
	{
		cout << "Nhap ten khach hang: ";
		cin.ignore();
		getline(cin, this->sName);
		this->quyTrinh.resize(7);
		for (int i = 0; i < this->quyTrinh.size(); i++)
		{
			cout << "Buoc " << i + 1 << " la:\n";
			if (i == 0) quyTrinh[i] = new TayTrang();
			else if (i == 1) quyTrinh[i] = new RuaMat();
			else if (i == 2) quyTrinh[i] = new MatNa();
			else if (i == 3) quyTrinh[i] = new Toner();
			else if (i == 4) quyTrinh[i] = new Serum();
			else if (i == 5) quyTrinh[i] = new KemDuong();
			else quyTrinh[i] = new ChongNang();
			quyTrinh[i]->Input();
		}
	}
	int TongTien()
	{
		int t = 0;
		for (int i = 0; i < this->quyTrinh.size(); i++)
		{
			t += quyTrinh[i]->getTien();
		}
		return t;
	}
	int TongThoiGian()
	{
		int h = 0;
		for (int i = 0; i < this->quyTrinh.size(); i++)
		{
			h += quyTrinh[i]->getThoiGian();
		}
		return h;
	}
	void Output()
	{
		cout << this->sName << "\n";
		for (int i = 0; i < this->quyTrinh.size(); i++)
		{
			quyTrinh[i]->Output(); cout << "\n";
		}
		cout << this->TongTien() << "000" << " \n" << this->TongThoiGian() << "\n";
	}
	~KhachHang()
	{

	}
};

class SpaKMC {
private:
	vector<KhachHang> nguoi;
public:
	SpaKMC()
	{

	}
	void Input()
	{
		int x;
		cout << "Menu: \n\tNhap 1 de co khach hang su dung dich vu\n\tNhap 0 khi het khach hang su dung dich vu\n";
		while (true)
		{
			cout << "Nhap gia tri xet khach hang: "; cin >> x;
			if (x == 0) break;
			else {
				KhachHang b;
				b.Input();
				nguoi.push_back(b);
			}
		}
	}
	void Output()
	{
		for (int i = 0; i < nguoi.size(); i++)
		{
			nguoi[i].Output();
		}
	}
	void ChiTieuMax()
	{
		int m = 0;
		for (int i = 0; i < nguoi.size(); i++)
		{
			if (nguoi[i].TongTien() > nguoi[m].TongTien()) m = i;
		}
		cout << "\n\n\tNguoi co chi tieu cao nhat la: ";
		nguoi[m].Output();
	}
	~SpaKMC()
	{

	}
};

int main()
{
	KhachHang a;
	a.Input();
	a.Output();
	SpaKMC b;
	b.Input();
	b.Output();
	b.ChiTieuMax();
	return 0;
}