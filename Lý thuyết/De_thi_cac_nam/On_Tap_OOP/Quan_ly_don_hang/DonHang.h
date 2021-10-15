#pragma once
#include <iostream>
#include <string>
using namespace std;
class DonHang
{
private:
	string MaLoaiSanPham;
	int LoaiSanPham;
	string TenSanPham;
	string NoiSanXuat;
	double GiaTien;
	float TheTich;
	float KhoiLuong;
	int SoLuongMua;
	int LoaiNuocUong;
	float NongDoCon;
public:
	DonHang();
	friend istream& operator>>(istream& is, DonHang& a) {
		cout << "Chon loai san pham (0_ do an va 1_ thuc uong ): "; is >> a.LoaiSanPham;
		cout << "Nhap ma san pham : "; getline(is, a.MaLoaiSanPham);
		cout << "Ten san pham: "; getline(is, a.TenSanPham);
		cout << "Gia tien "; is >> a.GiaTien;
		cout << "Noi san xuat: "; getline(is, a.NoiSanXuat);
		if (a.LoaiSanPham == 0) {
			cout << "Khoi luong : "; is >> a.KhoiLuong;
		}
		else {
			cout << "The tich: "; is >> a.TheTich;
			cout << "Loai nuoc uong (0_ruou va 1_nuoc giai khat) : "; is >> a.LoaiNuocUong;
			if (a.LoaiNuocUong == 1) {
				cout << "Nong do con : "; is >> a.NongDoCon;
			}
		}
		cout << "So luong mua: "; is >> a.SoLuongMua;
		return is;
	}
	double TongGiaTien();
	friend ostream& operator <<(ostream& os, DonHang a) {
		os << a.MaLoaiSanPham << " " << a.TenSanPham << " " << a.NoiSanXuat << " " << a.GiaTien << " ";
		if (a.LoaiSanPham == 0) {
			os << a.KhoiLuong << " ";
		}
		else {
			os << a.TheTich << " ";
			if (a.LoaiNuocUong == 0) {
				os << a.NongDoCon << " ";
			}
		}
		os << a.SoLuongMua;
		os << endl;
		return os;
	}
	~DonHang();
	
};

