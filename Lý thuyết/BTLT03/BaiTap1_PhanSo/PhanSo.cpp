#include "PhanSo.h"
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
	if (iMauSo == 0)
	{
		cout << "error" << endl;
	}
	else if (iMauSo == 1 || iTuSo == 0)
	{
		cout << iTuSo << endl;
	}
	else
	{
		cout << iTuSo << "/" << iMauSo << endl;
	}
}


PhanSo PhanSo::Add(PhanSo ps2)
{
	PhanSo psA;
	psA.iTuSo = this->iTuSo * ps2.iMauSo + this->iMauSo * ps2.iTuSo;
	psA.iMauSo = this->iMauSo * ps2.iMauSo;
	return psA;
}

PhanSo PhanSo::Subtract(PhanSo ps2)
{
	PhanSo psS;
	psS.iTuSo = this->iTuSo * ps2.iMauSo - this->iMauSo * ps2.iTuSo;
	psS.iMauSo = this->iMauSo * ps2.iMauSo;
	return psS;
}

PhanSo PhanSo::Multiply(PhanSo ps2)
{
	PhanSo psM;
	psM.iTuSo = this->iTuSo * ps2.iTuSo;
	psM.iMauSo = this->iMauSo * ps2.iMauSo;
	return psM;
}

PhanSo PhanSo::Divide(PhanSo ps2)
{
	PhanSo psD;
	psD.iTuSo = this->iTuSo * ps2.iMauSo;
	psD.iMauSo = this->iMauSo * ps2.iTuSo;
	return psD;
}

void PhanSo::Compact()
{
	int iUCLN = Gcd(iTuSo, iMauSo);
	iTuSo = iTuSo / iUCLN;
	iMauSo = iMauSo / iUCLN;
	if (iMauSo < 0)
	{
		iTuSo *= (-1);
		iMauSo *= (-1);
	}
}
