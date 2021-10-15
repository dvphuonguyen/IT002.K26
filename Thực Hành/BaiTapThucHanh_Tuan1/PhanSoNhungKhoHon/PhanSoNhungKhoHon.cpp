#include "PhanSoNhungKhoHon.h"

PhanSo::PhanSo()
{
	iTuSo = 0;
	iMauSo = 1;
}

PhanSo::~PhanSo()
{
}

void PhanSo::Input()
{
	cin >> iTuSo;
	do
	{
		cin >> iMauSo;
	} while (iMauSo == 0);
}

void PhanSo::Output()
{
	cout << iTuSo << "/" << iMauSo << endl;
}

float PhanSo::Float()
{
	return float(iTuSo) / iMauSo;
}



int main()
{
	PhanSo psA[SO_LUONG_MANG];
	int iSoLuong;
	cin >> iSoLuong;
	for (int i = 0; i < iSoLuong; i++)
	{
		psA[i].Input();
	}
	int fMax = 0;
	for (int i = 1; i < iSoLuong; i++)
	{
		if (psA[i].Float() > psA[fMax].Float()) fMax = i;
	}
	int fMin = 0;
	for (int i = 1; i < iSoLuong; i++)
	{
		if (psA[i].Float() < psA[fMin].Float()) fMin = i;
	}
	psA[fMin].Output();
	psA[fMax].Output();
	system("pause");
	return 0;
}
