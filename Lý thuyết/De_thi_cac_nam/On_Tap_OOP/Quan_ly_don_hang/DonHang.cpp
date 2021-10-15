#include "DonHang.h"

DonHang::DonHang()
{
	this->GiaTien = 0;
	this->KhoiLuong = 0;
	this->LoaiSanPham = 0;
	this->MaLoaiSanPham = "Chua co";
	this->NoiSanXuat = "Chua co";
	this->SoLuongMua = 0;
	this->TenSanPham = "Chua co";
	this->TheTich = 0;
}

double DonHang::TongGiaTien()
{
	return this->GiaTien * this->SoLuongMua;
}

DonHang::~DonHang()
{
}
