#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CCPU
{
protected:
	string sMaCPU;
	string sLoaiCPU;
	int iTypeCPU;
	string sHangCPU;
	float fSoCore;
	float fXungNhip;
	float fGiaNhapCPU;
public:
	virtual float getGia()
	{
		return this->fGiaNhapCPU;
	}
	virtual int getType()
	{
		return this->iTypeCPU;
	}
	virtual void Input()
	{
		cout << "nhap ma CPU: "; getline(cin, this->sMaCPU);
	}
	virtual void Output()
	{
		cout << "CPU: ";
		cout << this->sMaCPU << " " << this->sLoaiCPU << " " << this->sHangCPU << " " << this->fSoCore << " " << this->fXungNhip << " " << this->fGiaNhapCPU << "\n";
	}
};
class CAlpha :public CCPU
{
private:

public:
	void Input()
	{
		CCPU::Input();
		this->fGiaNhapCPU = 200;
		this->fSoCore = 2;
		this->fXungNhip = 1.8;
		this->sHangCPU = "Black";
		this->iTypeCPU = 1;
	}
	float getXungNhip()
	{
		return this->fXungNhip;
	}
	int getType()
	{
		return this->iTypeCPU;
	}
	void Output()
	{
		CCPU::Output();
	}
};

class CBeta :public CCPU
{
private:

public:
	void Input()
	{
		CCPU::Input();
		this->fGiaNhapCPU = 400;
		this->fSoCore = 4;
		this->fXungNhip = 2.46;
		this->sHangCPU = "Black";
		this->iTypeCPU = 2;
	}
	float getGia()
	{
		return this->fGiaNhapCPU;
	}
	int getType()
	{
		return this->iTypeCPU;
	}
	void Output()
	{
		CCPU::Output();
	}
};

class CGamma :public CCPU
{
private:

public:
	void Input()
	{
		CCPU::Input();
		this->fGiaNhapCPU = 600;
		this->fSoCore = 4;
		this->fXungNhip = 2.6;
		this->sHangCPU = "White";
		this->iTypeCPU = 3;
	}
	float getGia()
	{
		return this->fGiaNhapCPU;
	}
	int getType()
	{
		return this->iTypeCPU;
	}
	void Output()
	{
		CCPU::Output();
	}
};

class CManHinh
{
protected:
	string sMaManHinh;
	string sHangManHinh;
	string sDPG;
	int iDPG;
	float fGiaManHinh;
	float fKichThuoc;
public:
	virtual void Input(string a, string b,int x)
	{		
		this->sHangManHinh = b;
		this->sMaManHinh = a;
		this->iDPG = x;
	}
	virtual void Output()
	{
		cout << "Man hinh: " << this->sMaManHinh << " " << this->sHangManHinh << " " << this->sDPG << " " << this->fGiaManHinh;
	}
	virtual void setMa(string a)
	{
		for (int i = 0; i < a.size(); i++) {
			this->sMaManHinh[i] = a[i];
		}
	}
	virtual void setHang(string a)
	{
		for (int i = 0; i < a.size(); i++) {
			this->sHangManHinh[i] = a[i];
		}
	}
	virtual float getGia()
	{
		return this->fGiaManHinh;
	}
};

class CHD :public CManHinh
{
private:
	int iChongLoa;
public:
	void Input(string a, string b,int x)
	{
		CManHinh::Input(a,b,x);
		this->iDPG = 1;
		this->sDPG = "HD";
		this->iChongLoa = 1;
		this->fGiaManHinh = 300;
	}
	void setMa(string a)
	{
		for (int i = 0; i < a.size(); i++) {
			this->sMaManHinh[i] = a[i];
		}
	}
	void setHang(string a)
	{
		for (int i = 0; i < a.size(); i++) {
			this->sHangManHinh[i] = a[i];
		}
	}
	void Output()
	{
	CManHinh:Output();
		cout << "\n";
	}
	float getGia()
	{
		return this->fGiaManHinh;
	}
};

class CFull_HD :public CManHinh
{
private:
	int iChongLoa;
public:
	void Input(string a, string b,int x)
	{
		CManHinh::Input(a,b,x);
		this->iDPG = 2;
		this->sDPG = "FullHD";
		this->iChongLoa = 2;
		if (this->iChongLoa == 2) {
			this->fGiaManHinh = 500;
		}
		else
		{
			this->fGiaManHinh = 300;
		}
	}
	void setMa(string a)
	{
		for (int i = 0; i < a.size(); i++) {
			this->sMaManHinh[i] = a[i];
		}
	}
	void setHang(string a)
	{
		for (int i = 0; i < a.size(); i++) {
			this->sHangManHinh[i] = a[i];
		}
	}
	void Output()
	{
	CManHinh:Output();
		cout << " Chong loa\n";
	}
	float getGia()
	{
		return this->fGiaManHinh;
	}
};

class CVo
{
protected:
	string sMaVo;
	string sLoaiVo;
	string sHangVo;
	float fGiaVo;
	string sMauSac;
	int iLoaiVo;
	int iMauSac;
public:
	virtual void Input(string a, int x)
	{
		this->sMaVo = a;
		this->iMauSac = x;
	}
	virtual void Output()
	{
		cout << "Vo: " << this->sMaVo << " " << this->sLoaiVo << " " << this->sHangVo << " " << this->sMauSac << " " << this->fGiaVo << "\n";
	}
	virtual  float getGia()
	{
		return this->fGiaVo;
	}
	virtual void setMa(string a)
	{
		for (int i = 0; i < a.size(); i++) {
			this->sMaVo[i] = a[i];
		}
	}
};

class CVoNhom : public CVo
{
private:
public:
	void Input(string a, int x)
	{
		CVo::Input(a,x);
		this->iLoaiVo = 1;
		this->sLoaiVo = "Nhom";
		if (this->iMauSac == 1)
		{
			this->sMauSac = "Do";
		}
		else
		{
			this->sMauSac = "Den";
		}
		this->fGiaVo = 400;
		this->sHangVo = "Black";
	}
	void Output()
	{
		CVo::Output();
	}
	float getGia()
	{
		return this->fGiaVo;
	}
	void setMa(string a)
	{
		for (int i = 0; i < a.size(); i++) {
			this->sMaVo[i] = a[i];
		}
	}
};

class CVoNhua : public CVo
{
private:
public:
	void Input(string a, int x)
	{
		CVo::Input(a,x);
		this->iLoaiVo = 2;
		this->sLoaiVo = "Nhua";
		if (this->iMauSac == 1)
		{
			this->sMauSac = "Do";
		}
		else if(this->iMauSac == 2)
		{
			this->sMauSac = "Den";
		}
		else
		{
			this->sMauSac = "Xanh";
		}
		this->fGiaVo = 200;
		this->sHangVo = "White";
	}
	void Output()
	{
		CVo::Output();
	}
	float getGia()
	{
		return this->fGiaVo;
	}
	void setMa(string a)
	{
		for (int i = 0; i < a.size(); i++) {
			this->sMaVo[i] = a[i];
		}
	}
};

class CSmartphone
{
protected:
	string sMaSP;
	string sDongSP;
	float fGiaSP;
	CVo* Vo;
	CCPU* Cpu;
	CManHinh* ManHinh;
	int iDongSanPham;
public:
	virtual void Input()
	{
		cin.ignore();
		int x;
		cout << "Nhap ma so: "; getline(cin, this->sMaSP);
		cout << "Nhap loai CPU: "; cin >> x;

		if (x == 1) {
			Cpu = new CAlpha();
		}
		else if (x == 2)
		{
			Cpu = new CBeta();
		}
		else Cpu = new CGamma();
		Cpu->Input();
		string a, b;
		cin >> a >> b;
		cin >> x;
		if (x == 1) {
			ManHinh = new CHD();
		}
		else
			ManHinh = new CFull_HD();
		ManHinh->Input(a,b,x);
		int y;
		cin >> y;
		cin >> a;
		cin >> x;
		if (y == 1)
			Vo = new CVoNhom();
		else
			Vo = new CVoNhua();
		Vo->Input(a,x);
	}
	virtual void Output()
	{
		cout << "Smartphone: " << this->sMaSP << " " << this->sDongSP << " "; this->setGia(); cout<<this->fGiaSP << "\n";
		cout << "\t";
		Cpu->Output();
		cout << "\t";
		ManHinh->Output();
		cout << "\t";
		Vo->Output();
	}
	virtual void setGia()
	{
		this->fGiaSP = 1.8 * (Vo->getGia() + Cpu->getGia() + ManHinh->getGia());
	}
};

class CVenus :public CSmartphone
{
private:
public:
	void Input()
	{
		CSmartphone::Input();
		this->iDongSanPham = 1;
		this->sDongSP = "Venus";
	}
	void Output()
	{
		CSmartphone::Output();
	}
	void setGia()
	{
		this->fGiaSP = 1.3 * (Vo->getGia() + Cpu->getGia() + ManHinh->getGia());
	}
};

class CMars :public CSmartphone
{
private:
public:
	void Input()
	{
		CSmartphone::Input();
		this->iDongSanPham = 2;
		this->sDongSP = "Mars";
		this->Vo = new CVoNhom();
		this->ManHinh = new CFull_HD();
	}
	void Output()
	{
		CSmartphone::Output();
	}
	void setGia()
	{
		this->fGiaSP = 1.5 * (Vo->getGia() + Cpu->getGia() + ManHinh->getGia());
	}
};

class CVJupiter :public CSmartphone
{
private:
public:
	void Input()
	{
		CSmartphone::Input();
		this->iDongSanPham = 3;
		this->sDongSP = "Jupiter";
		this->Cpu = new CGamma();
		this->ManHinh = new CFull_HD();
		this->Vo = new CVoNhom();
	}
	void Output()
	{
		CSmartphone::Output();
	}
	void setGia()
	{
		this->fGiaSP= 1.8 * (Vo->getGia() + Cpu->getGia() + ManHinh->getGia());
	}
};
int main()
{
	int n;
	cin >> n;
	int x;
	vector < CSmartphone*> a;
	while(n>0) {
		cin >> x;
		CSmartphone* b = NULL;
		switch (x)
		{
		case 1:
			b = new CVenus();
			//cin.ignore();
			b->Input();
			break;
		case 2:
			b = new CMars();
			cin.ignore();
			b->Input();
			break;
		case 3:
			b = new CVJupiter();
			//cin.ignore();
			b->Input();
			break;
		}
		a.push_back(b);
		n--;
	}
	for (int i = 0; i < n; i++) {
		a[i]->Output();
	}

	return 0;
}