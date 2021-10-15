#pragma once
#include "DonHang.h"
#include"KhachHang.h"
class CuaHang
{
private:
	int SoLuongDonHang;
	CuaHang* cuaHang;
	int LoaiDonHang;
	string MaDonHang;
	string NgayGiaoHang;
	string NgayDatHang;
	string DiaChiGiaoHang;
	KhachHang khachHang;
	int SoLuongMatHang;
	DonHang *donHang;
public:
	friend istream& operator>>(istream& is, CuaHang& a) {
		cout << "Nhap so luong don hang : "; is >> a.SoLuongDonHang;
		a.cuaHang = new CuaHang[a.SoLuongDonHang];
		for (int i = 0; i < a.SoLuongDonHang; i++) {

			cout << "Loai don hang (0_ban le va 1_ ban si): "; is >> a.cuaHang[i].LoaiDonHang;
			cin.ignore();
			cout << "Ma don hang : "; getline(is, a.cuaHang[i].MaDonHang);
			cout << "Ngay dat hang : "; getline(is, a.cuaHang[i].NgayDatHang);
			cout << "Ngay giao hang: "; getline(is, a.cuaHang[i].NgayGiaoHang);
			cout << "Thong tin khach hang: \n"; is >> a.cuaHang[i].khachHang;
			cout << "Danh sach thong tin don hang: \n";
			cout << "Nhap so luong mat hang : "; is >> a.cuaHang[i].SoLuongMatHang;
			a.donHang = new DonHang[a.SoLuongMatHang];
			for (int j = 0; j < a.SoLuongMatHang; j++) {
				cout << "San pham " << j + 1 << " : \n";
				is >> a.cuaHang[i].donHang[j];
			}
		}
		return is;
	}
	double GiaDonHang();
	friend ostream& operator<<(ostream& os, CuaHang a) {
		for (int i = 0; i < a.SoLuongDonHang; i++) {
			os << "Don hang " << i + 1 << " : " << a.cuaHang[i].MaDonHang << " " << a.cuaHang[i].GiaDonHang() << " " << a.cuaHang[i].NgayDatHang << " " << a.cuaHang[i].NgayGiaoHang << " " << a.cuaHang[i].DiaChiGiaoHang << " ";
			os << a.cuaHang[i].khachHang;
			os << "Danh sach dat hang: \n";
			for (int j = 0; j < a.cuaHang[i].SoLuongMatHang; j++) {
				os << "San pham " << j + 1 << " " << a.cuaHang[i].donHang[j];
			}

		}
		return os;
	}
};

