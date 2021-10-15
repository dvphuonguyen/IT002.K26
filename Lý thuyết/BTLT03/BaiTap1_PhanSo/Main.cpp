#include "PhanSo.h"
int main()
{
	PhanSo ps1, ps2, psA, psS, psM, psD;
	ps1.Input();
	ps2.Input();
	cout << "Tong: ";
	psA = ps1.Add(ps2);
	psA.Compact();
	psA.Output();
	cout << "Hieu: ";
	psS = ps1.Subtract(ps2);
	psS.Compact();
	psS.Output();
	cout << "Tich: ";
	psM = ps1.Multiply(ps2);
	psM.Compact();
	psM.Output();
	cout << "Thuong: ";
	psD = ps1.Divide(ps2);
	psD.Compact();
	psD.Output();
	system("pause");
	return 0;
}
