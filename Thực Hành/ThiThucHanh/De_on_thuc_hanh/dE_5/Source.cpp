#include <iostream>
#include <string>
#include <vector>
using namespace std;

class CGuess
{
protected:
	string sName;
	float fChiSoCu;
	float fChiSoMoi;
	float fSoTienThanhToan;
	int iType;
public:
	CGuess()
	{
		this->sName = "";
		this->fChiSoCu = 0;
		this->fChiSoMoi = 0;
		this->fSoTienThanhToan = 0;
		this->iType = 0;
	}
	virtual void Input()
	{
		cout << "Nhap ho ten khach hang: "; getline(cin, this->sName);
		cout << "Nhap so chi cu: "; cin >> this->fChiSoCu;
		cout << "Nhap so chi moi: "; cin >> this->fChiSoMoi;
	}
	virtual void  Output()
	{
		cout << this->sName << " - " << this->fChiSoCu << " - " << this->fChiSoMoi << " - " << this->TienThanhToan() ;
	}
	virtual float TienNuoc()
	{
		return 0;
	}
	virtual float TienThanhToan()
	{
		return 0;
	}
	~CGuess()
	{

	}
};

class CHoKinhDoanh : public CGuess
{
protected:
	string sLinhVuc;
	int iLinhVuc;
public:
	CHoKinhDoanh()
	{
		CGuess();
		sLinhVuc = "";
		iLinhVuc = 0;
		this->iType = 1;
	}
	void Input()
	{
		CGuess::Input();
	}
	void Output()
	{
		CGuess::Output();
		cout << " - " << this->sLinhVuc << "\n";
	}
	float TienNuoc()
	{
		return 1.05 * (this->fChiSoMoi - this->fChiSoCu) * 2000;
	}
	float TienThanhToan()
	{
		return this->TienNuoc() - this->TienUuDai();
	}
	virtual float TienUuDai()
	{
		return 0;
	}
	~CHoKinhDoanh()
	{

	}
};

class CNhaHang :public CHoKinhDoanh
{
private:
public:
	CNhaHang()
	{
		CHoKinhDoanh();
		this->iLinhVuc = 1;
		this->sLinhVuc = "Nha hang";
	}
	float TienNuoc()
	{
		return 1.05 * (this->fChiSoMoi - this->fChiSoCu) * 2000;
	}
	float TienUuDai()
	{
		return 0;
	}
};

class CKhachSan :public CHoKinhDoanh
{
private:
public:
	CKhachSan()
	{
		CHoKinhDoanh();
		this->iLinhVuc = 2;
		this->sLinhVuc = "Khach san";
	}
	float TienUuDai()
	{
		return 0;
	}
	float TienNuoc()
	{
		return 1.05 * (this->fChiSoMoi - this->fChiSoCu) * 2000;
	}
};


class CCongTyTuNhan :public CHoKinhDoanh
{
private:
public:
	CCongTyTuNhan()
	{
		CHoKinhDoanh();
		this->iLinhVuc = 3;
		this->sLinhVuc = "Cong ty tu nhan";
	}
	float TienUuDai()
	{
		return 0;
	}
	float TienNuoc()
	{
		return 1.05 * (this->fChiSoMoi - this->fChiSoCu) * 2000;
	}
};

class CCongTyNhaNuoc :public CHoKinhDoanh
{
private:
public:
	CCongTyNhaNuoc()
	{
		CHoKinhDoanh();
		this->iLinhVuc = 4;
		this->sLinhVuc = "Cong ty nha nuoc";
	}
	float TienNuoc()
	{
		return 1.05 * (this->fChiSoMoi - this->fChiSoCu) * 2000;
	}
	float TienUuDai()
	{
		return this->TienNuoc() * 0.05;
	}
};

class CHoDan:public CGuess
{
private:
public:
	CHoDan()
	{
		CGuess();
		this->iType = 2;
	}
	void Input()
	{
		CGuess::Input();
	}
	void Output()
	{
		CGuess::Output();
		cout << " - Ho dan";
		cout << "\n";
	}
	float TienNuoc()
	{
		float s;
		float a = this->fChiSoMoi - this->fChiSoCu;
		if (a >= 0 && a <= 20) {
			s = a * 8000;
		}
		else if (a >= 21 && a <= 40)
		{
			s = 20 * 8000 + (a - 20) * 12000;
		}
		else
			s = 20 * 8000 + 20 * 12000 + (a - 40) * 18000;
		return s;
	}
	float TienThanhToan()
	{
		return this->TienNuoc() + 0.05 * this->TienNuoc();
	}
};

class Company
{
private:
	vector<CGuess*> a;
public:
	Company()
	{

	}
	void Input()
	{
		int x, y;
		cout << "Menu:\n\tNhap 0 de dung lai qua trinh nhap\n\tNhap 1 doi voi ho kinh doanh\n\t\tNhap 1 doi voi kinh doanh nha hang\n\t\tNhap 2 doi voi kinh doanh khach san\n\t\tNhap 3 doi voi kinh doanh cong ty tu nhan\n\t\tNhap 4 doi voi kinh doanh cong ty nha nuoc\n\tNhap 2 doi voi ho dan cu\n";
		while (true)
		{
			CGuess* b = NULL;
			cout << "Xet the loai ho: ";
			cin >> x;
			if (x == 0)
				break;
			if (x == 1)
			{
				cout << "Xet the loai ho kinh doanh: ";
				cin >> y;
				if (y == 1)
				{
					b = new CNhaHang();
				}
				else if (y == 2)
				{
					b = new CKhachSan();
				}
				else if (y == 3)
				{
					b = new CCongTyTuNhan();
				}
				else
					b = new CCongTyNhaNuoc();
			}
			else
				b = new CHoDan();

			cin.ignore();
			b->Input();
			a.push_back(b);
		}
	}
	void Output()
	{
		for (int i = 0; i < a.size(); i++)
		{
			a[i]->Output();
		}
	}
	void TongTienNuocCacHoSuDung()
	{
		float s = 0;
		for (int i = 0; i < a.size(); i++)
		{
			s += a[i]->TienThanhToan();
		}
		cout << "Tong tien nuoc cac ho da su dung la: " << s << "\n";
	}
	void HoKinhDoanhTieuThuNhieuNhat()
	{
		int m = 0;
		for (int i = 1; i < a.size(); i++)
		{
			if (a[i]->TienThanhToan() > a[m]->TienThanhToan())
				m = i;
		}
		cout << "Ho kinh doanh tieu thu nhieu nhat la: \n\t";
		a[m]->Output();
	}
	~Company()
	{

	}
};
int main()
{
	Company a;
	a.Input();
	a.Output();
	a.TongTienNuocCacHoSuDung();
	a.HoKinhDoanhTieuThuNhieuNhat();
	return 0;
}