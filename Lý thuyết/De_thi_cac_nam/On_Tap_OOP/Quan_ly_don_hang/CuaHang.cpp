#include "CuaHang.h"

double CuaHang::GiaDonHang()
{
	double s = 0;
	for (int i = 0; i < this->SoLuongMatHang; i++) {
		s += this->donHang[i].TongGiaTien();
	}
	if (this->LoaiDonHang == 1) {
		s *= 0.85;
	}
	return s;
}
