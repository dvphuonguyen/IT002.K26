#include <iostream>
#include <string>
#include <vector>
using namespace std;
class NguHanh {
protected:
	int iLoaiNguHanh;
	string sTenNguHanh;
public:
	NguHanh()
	{
		this->iLoaiNguHanh = 0;
		this->sTenNguHanh = "";
	}
	virtual int getLoaiNguHanh() {
		return this->iLoaiNguHanh;
	}
	virtual float TuongSinh(float SatThuong, int LoainguHanh)
	{
		return 0;
	}
	virtual float TuongKhac(float SatThuong, int LoainguHanh)
	{
		return 0;
	}
	virtual string getTenNguHanh()
	{
		return this->sTenNguHanh;
	}
};
class Kim :public NguHanh {
public:
	Kim() {
		this->iLoaiNguHanh = 1;
		this->sTenNguHanh = "Kim";
	}
	int getLoaiNguHanh() {
		return this->iLoaiNguHanh;
	}
	string getTenNguHanh()
	{
		return this->sTenNguHanh;
	}
	float TuongSinh(float SatThuong, int LoaiNguHanh)
	{
		if (LoaiNguHanh == 2) return SatThuong * 1.1;
		return SatThuong;
	}
	float TuongKhac(float SatThuong, int LoaiNguHanh)
	{
		if (LoaiNguHanh == 3) return SatThuong * 1.2;
		else if (LoaiNguHanh == 4) return SatThuong * 0.8;
		return SatThuong;
	}
};
class Thuy :public NguHanh {
public:
	Thuy() {
		this->iLoaiNguHanh = 2;
		this->sTenNguHanh = "Thuy";
	}
	int getLoaiNguHanh() {
		return this->iLoaiNguHanh;
	}
	float TuongSinh(float SatThuong, int LoaiNguHanh)
	{
		if (LoaiNguHanh == 3) return SatThuong * 1.1;
		return SatThuong;
	}
	string getTenNguHanh()
	{
		return this->sTenNguHanh;
	}
	float TuongKhac(float SatThuong, int LoaiNguHanh)
	{
		if (LoaiNguHanh == 4) return SatThuong * 1.2;
		else if (LoaiNguHanh == 5) return SatThuong * 0.8;
		return SatThuong;
	}
};
class Moc :public NguHanh {
public:
	Moc() {
		this->iLoaiNguHanh = 3;
		this->sTenNguHanh = "Moc";
	}
	int getLoaiNguHanh() {
		return this->iLoaiNguHanh;
	}
	float TuongSinh(float SatThuong, int LoaiNguHanh)
	{
		if (LoaiNguHanh == 4) return SatThuong * 1.1;
		return SatThuong;
	}
	string getTenNguHanh()
	{
		return this->sTenNguHanh;
	}
	float TuongKhac(float SatThuong, int LoaiNguHanh)
	{
		if (LoaiNguHanh == 5) return SatThuong * 1.2;
		else if (LoaiNguHanh == 1) return SatThuong * 0.8;
		return SatThuong;
	}
};
class Hoa :public NguHanh {
public:
	Hoa() {
		this->iLoaiNguHanh = 4;
		this->sTenNguHanh = "Hoa";
	}
	int getLoaiNguHanh() {
		return this->iLoaiNguHanh;
	}
	float TuongSinh(float SatThuong, int LoaiNguHanh)
	{
		if (LoaiNguHanh == 5) return SatThuong * 1.1;
		return SatThuong;
	}
	string getTenNguHanh()
	{
		return this->sTenNguHanh;
	}
	float TuongKhac(float SatThuong, int LoaiNguHanh)
	{
		if (LoaiNguHanh == 1) return SatThuong * 1.2;
		else if (LoaiNguHanh == 2) return SatThuong * 0.8;
		return SatThuong;
	}
};
class Tho :public NguHanh {
public:
	Tho() {
		this->iLoaiNguHanh = 5;
		this->sTenNguHanh = "Tho";
	}
	int getLoaiNguHanh() {
		return this->iLoaiNguHanh;
	}
	float TuongSinh(float SatThuong, int LoaiNguHanh)
	{
		if (LoaiNguHanh == 1) return SatThuong * 1.1;
		return SatThuong;
	}
	string getTenNguHanh()
	{
		return this->sTenNguHanh;
	}
	float TuongKhac(float SatThuong, int LoaiNguHanh)
	{
		if (LoaiNguHanh == 2) return SatThuong * 1.2;
		else if (LoaiNguHanh == 3) return SatThuong * 0.8;
		return SatThuong;
	}
};
class VoLamTruyenKy {
protected:
	int iLoaiVai;
	string sLoaiVai;
	int iCapDo;
	float fSatThuong;
	NguHanh* nhHe;
public:
	VoLamTruyenKy()
	{
		this->iLoaiVai = 0;
		this->sLoaiVai = "";
		this->iCapDo = 0;
		this->fSatThuong = 0;
	}
	virtual void Input()
	{
		cout << "Nhap cap do: "; cin >> this->iCapDo;
	}
	virtual void Output()
	{
		cout << this->sLoaiVai << " - " << this->iCapDo << " - " << this->fSatThuong <<" - "<< this->nhHe->getTenNguHanh() << "\n";
	}
	virtual float TinhSatThuong(int LoaiNguHanhTuongTac)
	{
		this->nhHe->TuongKhac(this->fSatThuong, LoaiNguHanhTuongTac);
		this->nhHe->TuongSinh(this->fSatThuong, LoaiNguHanhTuongTac);
		return this->fSatThuong;
	}
	virtual float getSatThuong()
	{
		return this->fSatThuong;
	}
	virtual int getLoaiVai()
	{
		return this->iLoaiVai;
	}
	virtual int getLoaiNguHanh()
	{
		return this->nhHe->getLoaiNguHanh();
	}
	~VoLamTruyenKy()
	{
		//delete[]nhHe;
	}
};
class NhanVat :public VoLamTruyenKy {
protected:
	string sTenMonPhai;
	int iLoaiMonPhai;
public:
	NhanVat()
	{
		VoLamTruyenKy();
		this->iLoaiVai = 1;
		this->sLoaiVai = "Nhan vat";
		this->sTenMonPhai = "";
		this->iLoaiMonPhai = 0;
	}
	void Input()
	{
		VoLamTruyenKy::Input();
		this->fSatThuong = this->iCapDo * 5;
	}
	void Output()
	{
		cout << this->sTenMonPhai << " - ";
		VoLamTruyenKy::Output();
	}
	virtual int getLoaiMomPhai()
	{
		return this->iLoaiMonPhai;
	}
	float getSatThuong()
	{
		return this->fSatThuong;
	}
	~NhanVat()
	{

	}
};
class ThieuLam :public NhanVat {
public:
	ThieuLam()
	{
		NhanVat();
		this->sTenMonPhai = "Thieu Lam";
		this->iLoaiMonPhai = 1;
		this->nhHe = new Kim();
	}
	int getLoaiMomPhai()
	{
		return this->iLoaiMonPhai;
	}
};
class ThienVuongBang :public NhanVat {
public:
	ThienVuongBang()
	{
		NhanVat();
		this->sTenMonPhai = "Thien Vuong Bang";
		this->iLoaiMonPhai = 2;
		this->nhHe = new Kim();
	}
	int getLoaiMomPhai()
	{
		return this->iLoaiMonPhai;
	}
};
class NgaMy :public NhanVat {
public:
	NgaMy()
	{
		NhanVat();
		this->sTenMonPhai = "Nga My";
		this->iLoaiMonPhai = 3;
		this->nhHe = new Thuy();
	}
	int getLoaiMomPhai()
	{
		return this->iLoaiMonPhai;
	}
};
class ThuyYenMon :public NhanVat {
public:
	ThuyYenMon()
	{
		NhanVat();
		this->sTenMonPhai = "Thuy Yen Mon";
		this->iLoaiMonPhai = 4;
		this->nhHe = new Thuy();
	}
	int getLoaiMomPhai()
	{
		return this->iLoaiMonPhai;
	}
};
class NguDocGiao :public NhanVat {
public:
	NguDocGiao()
	{
		NhanVat();
		this->sTenMonPhai = "Ngu Doc Giao";
		this->iLoaiMonPhai = 5;
		this->nhHe = new Moc();
	}
	int getLoaiMomPhai()
	{
		return this->iLoaiMonPhai;
	}
};
class DuongMon :public NhanVat {
public:
	DuongMon()
	{
		NhanVat();
		this->sTenMonPhai = "Duong Mon";
		this->iLoaiMonPhai = 6;
		this->nhHe = new Moc();
	}
	int getLoaiMomPhai()
	{
		return this->iLoaiMonPhai;
	}
};
class CaiBang :public NhanVat {
public:
	CaiBang()
	{
		NhanVat();
		this->sTenMonPhai = "Cai Bang";
		this->iLoaiMonPhai = 7;
		this->nhHe = new Hoa();
	}
	int getLoaiMomPhai()
	{
		return this->iLoaiMonPhai;
	}
};
class ThienNhanGiao :public NhanVat {
public:
	ThienNhanGiao()
	{
		NhanVat();
		this->sTenMonPhai = "Thien Nhan Giao";
		this->iLoaiMonPhai = 8;
		this->nhHe = new Hoa();
	}
	int getLoaiMomPhai()
	{
		return this->iLoaiMonPhai;
	}
};
class ConLon :public NhanVat {
public:
	ConLon()
	{
		NhanVat();
		this->sTenMonPhai = "Con Lon";
		this->iLoaiMonPhai = 9;
		this->nhHe = new Tho();
	}
	int getLoaiMomPhai()
	{
		return this->iLoaiMonPhai;
	}
};
class VoDang :public NhanVat {
public:
	VoDang()
	{
		NhanVat();
		this->sTenMonPhai = "Vo Dang";
		this->iLoaiMonPhai = 10;
		this->nhHe = new Tho();
	}
	int getLoaiMomPhai()
	{
		return this->iLoaiMonPhai;
	}
};

class QuaiVat :public VoLamTruyenKy {
protected:
	int iLoaiQuaiVat;
	string sTenQuaiVat;
public:
	QuaiVat()
	{
		VoLamTruyenKy();
		this->iLoaiVai = 2;
		this->sLoaiVai = "Quai vat";
		this->sTenQuaiVat = "";
		this->iLoaiQuaiVat = 0;
	}
	void Input()
	{
		VoLamTruyenKy::Input();
		int x; 
		cout << "\t\tNhap 1_kim, 2_Thuy, 3_Moc, 4_Hoa, 5_Tho\n";
		cin >> x;
		if (x == 1) this->nhHe = new Kim();
		else if (x == 2) this->nhHe = new Thuy();
		else if (x == 3) this->nhHe = new Moc();
		else if (x == 4) this->nhHe = new Hoa();
		else if (x == 5) this->nhHe = new Tho();
	}
	void Output()
	{
		cout << this->sTenQuaiVat << " - ";
		VoLamTruyenKy::Output();
	}
	virtual int getLoaiQuaiVat()
	{
		return this->iLoaiQuaiVat;
	}
	float getSatThuong()
	{
		return this->fSatThuong;
	}
};
class DauLinh :public QuaiVat {
private:
public:
	DauLinh()
	{
		QuaiVat();
		this->iLoaiQuaiVat = 1;
		this->sTenQuaiVat = "Dau Linh";
	}
	void Input()
	{
		QuaiVat::Input();
		this->fSatThuong = this->iCapDo * 7;
	}
	float getSatThuong()
	{
		return this->fSatThuong;
	}
	int getLoaiQuaiVat()
	{
		return this->iLoaiQuaiVat;
	}
};
class ThongThuong :public QuaiVat {
private:
public:
	ThongThuong()
	{
		QuaiVat();
		this->iLoaiQuaiVat = 2;
		this->sTenQuaiVat = "Thong Thuong";
	}
	void Input()
	{
		QuaiVat::Input();
		this->fSatThuong = this->iCapDo * 3;
	}
	int getLoaiQuaiVat()
	{
		return this->iLoaiQuaiVat;
	}
	float getSatThuong()
	{
		return this->fSatThuong;
	}
};


class QuanLy {
private:
	vector<VoLamTruyenKy*> a;
public:
	QuanLy() {

	}
	void Input()
	{
		cout << "Menu: ";
		cout << "\n\tNhap 0 de dung chuong trinh";
		cout << "\n\tNhap 1 de nguoi choi nhap vai nhan vat";
		cout << "\n\t\tNhap 1 de nguoi choi vao mon phai Thieu Lam";
		cout << "\n\t\tNhap 2 de nguoi choi vao mon phai Thien Vuong Bang";
		cout << "\n\t\tNhap 3 de nguoi choi vao mon phai Nga My";
		cout << "\n\t\tNhap 4 de nguoi choi vao mon phai Thuy Yen Mon";
		cout << "\n\t\tNhap 5 de nguoi choi vao mon phai Ngu Doc Giao";
		cout << "\n\t\tNhap 6 de nguoi choi vao mon phai Duong Mon";
		cout << "\n\t\tNhap 7 de nguoi choi vao mon phai Cai Bang";
		cout << "\n\t\tNhap 8 de nguoi choi vao mon phai Thien Nhan Giao";
		cout << "\n\t\tNhap 9 de nguoi choi vao mon phai Con Lon";
		cout << "\n\t\tNhap 10 de nguoi choi vao mon phai Vo Dang";
		cout << "\n\tNhap 2 de nguoi choi nhap vai quai vat";
		cout << "\n\t\tNhap 1 de quai vat la dau linh";
		cout << "\n\t\tNhap 2 de quai vat la thong thuong\n";
		int x, y;
		while (true) {
			cout << "Nhap loai nhap vai: "; cin >> x;
			if (x == 0) break;
			else {
				VoLamTruyenKy* b = NULL;
				if (x == 1) {
					b = new NhanVat();
					cout << "\tNhap loai mon phai: "; cin >> y;
					if (y == 1) b = new ThieuLam();
					else if (y == 2) b = new ThienVuongBang();
					else if (y == 3) b = new NgaMy();
					else if (y == 4) b = new ThuyYenMon();
					else if (y == 5) b = new NguDocGiao();
					else if (y == 6) b = new DuongMon();
					else if (y == 7) b = new CaiBang();
					else if (y == 8) b = new ThienNhanGiao();
					else if (y == 9) b = new ConLon();
					else b = new VoDang();
				}
				else
				{
					b = new QuaiVat();
					cout << "\tNhap loai quai vat: "; cin >> y;
					if (y == 1) b = new DauLinh();
					else b = new ThongThuong();
				}
				cin.ignore();
				b->Input();
				a.push_back(b);
			}
		}
	}
	void Output()
	{
		for (int i = 0; i < a.size(); i++) {
			a[i]->Output();
		}
	}
	void SatThuongMax()
	{
		int m = 0;
		for (int i = 1; i < a.size(); i++) {
			if (a[i]->getSatThuong() > a[m]->getSatThuong()) m = i;
		}
		cout << "\tNguoi choi co muc sat thuong cao nhat la:\n";
		a[m]->Output();
	}
	void SoSanh()
	{
		cout << "\tChon 2 gia tri bat ki tu 0 den " << a.size() << "\n";
		int x, y;
		cin >> x>> y;
		float X = a[x]->TinhSatThuong(this->a[y]->getLoaiNguHanh());
		float Y = a[y]->TinhSatThuong(this->a[x]->getLoaiNguHanh());
		cout << "\tSo sanh tinh sat thuong cua A va B thu duoc :\n";
		if (X > Y) cout << "Sat thuong cua A > sat thuong cua B\n";
		else if (X == Y) cout << "Sat thuong cua A = sat thuong cua B\n";
		else cout << "Sat thuong cua A < sat thuong cua B\n";
	}
};
int main()
{
	QuanLy a;
	a.Input();
	a.Output();
	a.SatThuongMax();
	a.SoSanh();
	return 0;
}
