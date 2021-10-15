#pragma once
#include <iostream>
#include <string>
using namespace std;
class KhachHang
{
private:
	string MaHang;
	string TenKhachHang;
	string DiaChi;
	string SDT;
	int LoaiKhachHang;
	string MaSoThue;
public:
	KhachHang();
	friend istream& operator>>(istream& is, KhachHang& a) {
		cout << "Ma khach hang: "; getline(is, a.MaHang);
		cout << "Loai khach hang (1_Khach hang ca nhan va 0_ khach hang doanh nghiep) : "; is >> a.LoaiKhachHang;
		cout << "Ten khach hang: "; getline(is, a.TenKhachHang);
		cout << "Dia chi: "; getline(is, a.DiaChi);
		cout << "SDT: "; getline(is, a.SDT);
		if (a.LoaiKhachHang == 0) {
			cout << "Ma so thue: "; getline(is, a.MaSoThue);
		}
		return is;
	}
	friend ostream& operator<<(ostream& os, KhachHang a) {
		os << "\tKhach hang : " << a.MaHang << " ";
		if (a.LoaiKhachHang == 1) {
			os << "Khach hang ca nhan ";
		}
		else os << "Khach hang doanh nghiep ";
		os << a.TenKhachHang << " " << a.DiaChi << " " << a.SDT << " ";
		if (a.LoaiKhachHang == 0) {
			os << a.MaSoThue;
		}
		os << endl;
		return os;
	}
	~KhachHang();
};

