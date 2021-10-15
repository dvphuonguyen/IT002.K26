#include "PhanSoDe.h"

int PhanSo::Gcd(int iTuSo, int iMauSo)
{
	iTuSo = abs(iTuSo);
	iMauSo = abs(iMauSo);
	if (iTuSo == 0 || iMauSo == 0)
		return (iTuSo + iMauSo);
	while (iTuSo != iMauSo)
	{
		if (iTuSo > iMauSo)
			iTuSo = iTuSo - iMauSo;
		else
			iMauSo = iMauSo - iTuSo;
	}
	return iMauSo;
}

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

void PhanSo::Compact()
{
	int iUCLN = Gcd(iTuSo, iMauSo);
	iTuSo = iTuSo / iUCLN;
	iMauSo = iMauSo / iUCLN;
}

int main()
{
	int iSoLuong;
	cin >> iSoLuong;
	PhanSo psA[SO_LUONG_MANG];
	for (int i = 0; i < iSoLuong; i++)
	{
		psA[i].Input();
		psA[i].Compact();
	}
	for (int i = 0; i < iSoLuong; i++)
	{
		psA[i].Output();
	}
	system("pause");
	return 0;
}
