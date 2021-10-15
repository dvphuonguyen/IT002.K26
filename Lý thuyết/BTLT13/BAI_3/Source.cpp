#include <iostream>
#include <string>
#include <vector>
using namespace std;

class ToaDo {
private:
	int x, y;
public:
	ToaDo() {
		this->x = 0;
		this->y = 0;
	}
	friend istream& operator>>(istream& is, ToaDo& a) {
		is >> a.x >> a.y;
		return is;
	}
	friend ostream& operator<<(ostream& os, ToaDo a) {
		os << "( " << a.x << " , " << a.y << " )";
		return os;
	}
	void setToaDo(int x, int y) {
		this->x = x;
		this->y = y;
	}
	~ToaDo() {

	}
};
class QuanCo {
protected:
	int iLoaiQuanCo;
	string sTenQuanCo;
	int iMauSac;
	string sTenMauSac;
	vector<ToaDo> vitri;
public:
	QuanCo() {
		this->iLoaiQuanCo = 0;
		this->iMauSac = 0;
		this->sTenMauSac = "";
		this->sTenQuanCo = "";
		vitri.resize(0);
	}
	virtual void Output() {
		cout << this->sTenQuanCo << " " << this->sTenMauSac << " ";
		for (int i = 0; i < vitri.size(); i++) {
			cout << vitri[i] << "\t";
		}
		cout << "\n";
	}
	virtual int getLoaiQuanCo() {
		return this->iLoaiQuanCo;
	}
};

class Tuongs :public QuanCo {
public:
	Tuongs(int x) {
		QuanCo();
		this->iLoaiQuanCo = 1;
		this->sTenQuanCo = "Tuongs";
		this->iMauSac = x;
		vitri.resize(1);
		if (x == 1)
		{
			this->sTenMauSac = "trang";
			vitri[0].setToaDo(1, 5);
		}
		else
		{
			this->sTenMauSac = "den";
			vitri[0].setToaDo(10, 5);
		}
	}
	void Output() {
		QuanCo::Output();
	}
};

class Si :public QuanCo {
public:
	Si(int x) {
		QuanCo();
		this->iLoaiQuanCo = 2;
		this->sTenQuanCo = "Si";
		this->iMauSac = x;
		vitri.resize(2);
		if (x == 1)
		{
			this->sTenMauSac = "trang";
			vitri[0].setToaDo(1, 4);
			vitri[1].setToaDo(1, 6);
		}
		else
		{
			this->sTenMauSac = "den";
			vitri[0].setToaDo(10, 4);
			vitri[1].setToaDo(10, 6);
		}
	}
	void Output() {
		QuanCo::Output();
	}
};

class Tuongj :public QuanCo {
public:
	Tuongj(int x) {
		QuanCo();
		this->iLoaiQuanCo = 3;
		this->sTenQuanCo = "Tuongj";
		this->iMauSac = x;
		vitri.resize(2);
		if (x == 1)
		{
			this->sTenMauSac = "trang";
			vitri[0].setToaDo(1, 3);
			vitri[1].setToaDo(1, 7);
		}
		else
		{
			this->sTenMauSac = "den";
			vitri[0].setToaDo(10, 3);
			vitri[1].setToaDo(10, 7);
		}
	}
	void Output() {
		QuanCo::Output();
	}
};

class Ma :public QuanCo {
public:
	Ma(int x) {
		QuanCo();
		this->iLoaiQuanCo = 4;
		this->sTenQuanCo = "Ma";
		this->iMauSac = x;
		vitri.resize(2);
		if (x == 1)
		{
			this->sTenMauSac = "trang";
			vitri[0].setToaDo(1, 2);
			vitri[1].setToaDo(1, 8);
		}
		else
		{
			this->sTenMauSac = "den";
			vitri[0].setToaDo(10, 2);
			vitri[1].setToaDo(10, 8);
		}
	}
	void Output() {
		QuanCo::Output();
	}
};

class Xe :public QuanCo {
public:
	Xe(int x) {
		QuanCo();
		this->iLoaiQuanCo = 5;
		this->sTenQuanCo = "Xe";
		this->iMauSac = x;
		vitri.resize(2);
		if (x == 1)
		{
			this->sTenMauSac = "trang";
			vitri[0].setToaDo(1, 1);
			vitri[1].setToaDo(1, 9);
		}
		else
		{
			this->sTenMauSac = "den";
			vitri[0].setToaDo(10, 1);
			vitri[1].setToaDo(10, 9);
		}
	}
	void Output() {
		QuanCo::Output();
	}
};
class Phao :public QuanCo {
public:
	Phao(int x) {
		QuanCo();
		this->iLoaiQuanCo = 6;
		this->sTenQuanCo = "Phao";
		this->iMauSac = x;
		vitri.resize(2);
		if (x == 1)
		{
			this->sTenMauSac = "trang";
			vitri[0].setToaDo(3, 2);
			vitri[1].setToaDo(3, 8);
		}
		else
		{
			this->sTenMauSac = "den";
			vitri[0].setToaDo(8, 2);
			vitri[1].setToaDo(8, 8);
		}
	}
	void Output() {
		QuanCo::Output();
	}
};

class Phaos :public QuanCo {
public:
	Phaos(int x) {
		QuanCo();
		this->iLoaiQuanCo = 6;
		this->sTenQuanCo = "Phao";
		this->iMauSac = x;
		vitri.resize(2);
		if (x == 1)
		{
			this->sTenMauSac = "trang";
			vitri[0].setToaDo(3, 2);
			vitri[1].setToaDo(3, 8);
		}
		else
		{
			this->sTenMauSac = "den";
			vitri[0].setToaDo(8, 2);
			vitri[1].setToaDo(8, 8);
		}
	}
	void Output() {
		QuanCo::Output();
	}
};

class Tot :public QuanCo {
public:
	Tot(int x) {
		QuanCo();
		this->iLoaiQuanCo = 7;
		this->sTenQuanCo = "Tot";
		this->iMauSac = x;
		vitri.resize(5);
		if (x == 1)
		{
			this->sTenMauSac = "trang";
			vitri[0].setToaDo(4, 1);
			vitri[1].setToaDo(4, 3);
			vitri[2].setToaDo(4, 5);
			vitri[3].setToaDo(4, 7);
			vitri[4].setToaDo(4, 9);
		}
		else
		{
			this->sTenMauSac = "den";
			vitri[0].setToaDo(7, 1);
			vitri[1].setToaDo(7, 3);
			vitri[2].setToaDo(7, 5);
			vitri[3].setToaDo(7, 7);
			vitri[4].setToaDo(7, 9);
		}
	}
	void Output() {
		QuanCo::Output();
	}
};

class BanCo {
private:
	vector<QuanCo*> banCo;
public:
	BanCo() {

	}
	void Input() {
		banCo.resize(14);
		int x = 1;
		for (int i = 0; i < banCo.size(); ++x) {
			if (x == 1) {
				for (int j = 1; j < 3; j++ && i++) {
					banCo[i] = new Tuongs(j);
				}
			}
			else if (x == 2) {
				for (int j = 1; j < 3; j++ && i++) {
					banCo[i] = new Si(j);
				}
			}
			else if (x == 3) {
				for (int j = 1; j < 3; j++ && i++) {
					banCo[i] = new Tuongj(j);
				}
			}
			else if (x == 4) {
				for (int j = 1; j < 3; j++ && i++) {
					banCo[i] = new Ma(j);
				}
			}
			else if (x == 5) {
				for (int j = 1; j < 3; j++ && i++) {
					banCo[i] = new Xe(j);
				}
			}
			else if (x == 6) {
				for (int j = 1; j < 3; j++ && i++) {
					banCo[i] = new Phaos(j);
				}
			}
			else {
				for (int j = 1; j < 3; j++ && i++) {
					banCo[i] = new Tot(j);
				}
			}
		}
	}
	void Output() {
		for (int i = 0; i < banCo.size(); i++) {
			banCo[i]->Output();
		}
	}
	void XuatCachDi() {
		cout << "Menu: \t\t1_Tuongs\t2_Si\t3_Tuongj\t4_Ma\t5_Xe\t6_Phao\t7_Tot\n";
		while (true) {
			cout << "Nhap quan co ma ban muon di chuyen: "; int x; cin >> x;
			if (x == 0) break;
			switch (x) {
			case 1:
				cout << "Tuongs : Di tung o mot, di ngang hoac doc. Tuong luon luon phai o trong pham vi cung va khong duoc ra ngoai. Cung tuc la hinh vuong 2*2 duoc danh dau bang duong cheo hinh chu X\n";
				break;
			case 2:
				cout << "Si : Di xeo 1 o moi nuoc. Si luon luon phai o trong cung cua Tuongs\n";
				break;
			case 3:
				cout << "Tuongj : Di cheo 2 o (nang 2 va doc 2) cho moi nuoc di. Tuongj chi duoc phep o mot ben cua ban co, khong duoc di chuyen sang nua ban co cua doi phuong. Nuoc di cua Tuongj sex khong hop le khi mot quan co nam chan giua duong di\n";
				break;
			case 4:
				cout << "Ma : Di ngang 2 o va di doc 1 o ( hay di doc 1 o va di ngang 2 o) cho moi nuoc di. Neu co quan nam ngay ben canh Ma va can duong ngang 2( doc 2), Ma bi can khong duoc di duong do\n";
				break;
			case 5:
				cout << "Xe : Di ngang hay doc tren ban co mien la dung bi quan khac can duong tu diem di den diem den\t";
				break;
			case 6:
				cout << "Phao : Di ngang va doc giong nhu xe. Diem khac biet la neu Phao muon an quan, Phao phai nhay qua dung 1 quan nao do. Khi khong an quan, tat ca nhung diem tu cho di den cho den phai khong co quan can nao\n";
				break;
			case 7:
				cout << "Tot : Di 1 o moi nuoc. Neu Tot chua vuot qua song, no chi co the di thang tien. Khi da vuot song roi, Tot co the di ngang 1 nuoc hay di thang tien 1 buoc moi nuoc\n";
				break;
			}
		}
	}
	~BanCo() {

	}
};
int main() {
	BanCo a;
	a.Input();
	a.Output();
	a.XuatCachDi();
	return 0;
}