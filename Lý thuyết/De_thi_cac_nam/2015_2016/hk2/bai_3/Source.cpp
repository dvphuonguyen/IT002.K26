#include<iostream>
#include<vector>
#include<string>
using namespace std;
class CaoDo {
protected:
	int iLoaiCD;
	string sTenCD;
	string sKiHieu;
public:
	CaoDo()
	{
		iLoaiCD = 0;
		sTenCD = "";
		sKiHieu = "";
	}
	virtual int getLoaiCD()
	{
		return iLoaiCD;
	}
	virtual string getTenCD()
	{
		return sTenCD;
	}
	virtual string getKiHieu()
	{
		return sKiHieu;
	}
	~CaoDo()
	{

	}
};
class Do :public CaoDo {
public:
	Do()
	{
		
		iLoaiCD = 1;
		sTenCD = "Do";
		sKiHieu = "C";
	};
};

class Re :public CaoDo {
public:
	Re()
	{
		
		iLoaiCD = 2;
		sTenCD = "Re";
		sKiHieu = "D";
	}
};

class Mi :public CaoDo {
public:
	Mi()
	{
		
		iLoaiCD = 3;
		sTenCD = "Mi";
		sKiHieu = "E";
	}
};

class Fa :public CaoDo {
public:
	Fa()
	{
		
		iLoaiCD = 4;
		sTenCD = "Fa";
		sKiHieu = "F";
	}
};

class Sol :public CaoDo {
public:
	Sol()
	{
		
		iLoaiCD = 5;
		sTenCD = "Sol";
		sKiHieu = "G";
	}
};

class La :public CaoDo {
public:
	La() {
		
		iLoaiCD = 6;
		sTenCD = "La";
		sKiHieu = "A";
	}
};
class Si :public CaoDo {
public:
	Si()
	{
		
		iLoaiCD = 7;
		sTenCD = "Si";
		sKiHieu = "B";
	}
};
class DauLang :public CaoDo {
public:
	DauLang()
	{
		
		iLoaiCD = 0;
		sTenCD = "Dau lang";
		sKiHieu = "Z";
	}
};

class TruongDo {
protected:
	int iLoaiTD;
	string sTenTD;
	string sGiaTri;
public:
	TruongDo()
	{
		iLoaiTD = 0;
		sTenTD = "";
		sGiaTri = "";
	}
	virtual string getTenTD()
	{
		return sTenTD;
	}
	virtual string getGiaTri()
	{
		return sGiaTri;
	}
	virtual int getLoaiTD() 
	{
		return iLoaiTD;
	}
};
class Tron :public TruongDo
{
public:
	Tron()
	{
		
		iLoaiTD = 1;
		sTenTD = "tron";
		sGiaTri = "4";
	}
};
class Trang :public TruongDo
{
public:
	Trang()
	{
		
		iLoaiTD = 2;
		sTenTD = "trang";
		sGiaTri = "2";
	}
};
class Den :public TruongDo
{
public:
	Den()
	{
		
		iLoaiTD = 3;
		sTenTD = "den";
		sGiaTri = "1";
	}
};
class Don :public TruongDo
{
public:
	Don()
	{
		
		iLoaiTD = 4;
		sTenTD = "moc don";
		sGiaTri = "1/2";
	}
};
class Kep :public TruongDo
{
public:
	Kep()
	{
		
		iLoaiTD = 5;
		sTenTD = "moc kep";
		sGiaTri = "1/4";
	}
};
class Tam :public TruongDo
{
public:
	Tam()
	{
		
		iLoaiTD = 6;
		sTenTD = "moc tam";
		sGiaTri = "1/8";
	}
};
class Tu :public TruongDo
{
public:
	Tu()
	{
		
		iLoaiTD = 7;
		sTenTD = "moc tu";
		sGiaTri = "1/16";
	}
};

class BanNhac {
private:
	vector<CaoDo*> vCaoDo;
	vector<TruongDo*> vTruongDo;
public:
	void Input()
	{
		cout << "Menu:\n";
		cout << "\t\tTruong do:\n";
		cout << "\t0_dung nhap\t1_tron\t2_trang\t3_den\t4_moc don\t5_moc kep\t6_moc tam\t7_moc tu\n";
		cout << "\t\tCao do:\n";
		cout << "\t0_Dau lang\t1_Do\t2_Re\t3_Mi\t4_Fa\t5_Sol\t6_La\t7_Si\n";
		int x, y;
		while (true)
		{
			cout << "Nhap truong do:";
			cin >> x;
			if (x == 0) break;
			cout << "Nhap cao do: ";
			cin >> y;
			CaoDo* b = NULL;
			TruongDo* a = NULL;
			if (x == 1) a = new Tron();
			else if (x == 2) a = new Trang();
			else if (x == 3) a = new Den();
			else if (x == 4) a = new Don();
			else if (x == 5) a = new Kep();
			else if (x == 6) a = new Tam();
			else if (x == 7)a = new Tu();
			vTruongDo.push_back(a);

			if (y == 0) b = new DauLang();
			else if (y == 1) b = new Do();
			else if (y == 2) b = new Re();
			else if (y == 3) b = new Mi();
			else if (y == 4) b = new Fa();
			else if (y == 5) b = new Sol();
			else if (y == 6) b = new La();
			else if (y == 7)b = new Si();
			vCaoDo.push_back(b);
		}
	}
	void Output()
	{
		for (int i = 0; i < vTruongDo.size(); i++)
		{
			cout << vTruongDo[i]->getGiaTri() << " - " << vCaoDo[i]->getKiHieu() << " - " << vCaoDo[i]->getTenCD() << " " << vTruongDo[i]->getTenTD() << "\n";
		}
	}
	void Dem()
	{
		int s = 0;
		for (int i = 0; i < vTruongDo.size(); i++)
		{
			if (vCaoDo[i]->getLoaiCD() == 0 && vTruongDo[i]->getLoaiTD() == 3) s += 1;
		}
		cout << "So luong Dau lang den la: " << s << "\n";
	}
	void CaoDoCaoNhat()
	{
		int m = 0;
		for (int i = 1; i < vTruongDo.size(); i++)
		{
			if (vCaoDo[i]->getLoaiCD() > vCaoDo[m]->getLoaiCD()) m = i;
		}
		cout << "Cao do cao nhat la: " << vCaoDo[m]->getTenCD();
	}
};
int main()
{
	BanNhac a;
	a.Input();
	a.Output();
	a.Dem();
	a.CaoDoCaoNhat();
	return 0;
}