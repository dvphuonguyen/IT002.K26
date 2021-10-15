#include "SoPhuc.h"

int main()
{
	SoPhuc spA[SO_LUONG_MANG];
	SoPhuc spTong, spHieu, spTich;
	int iSoLuong;
	Input(spA, iSoLuong);
	Addition(spA, iSoLuong, spTong);
	Subtraction(spA, iSoLuong, spHieu);
	return 0;
}