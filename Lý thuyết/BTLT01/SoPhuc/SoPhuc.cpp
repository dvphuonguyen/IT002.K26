#include "SoPhuc.h"

void SoPhuc::Input()
{
	cin >> this->fSoThuc;
	cin >> this->fSoAo;
}

void SoPhuc::Output()
{
	cout << fSoThuc << " + " << fSoAo << "i" << endl;
}

SoPhuc SoPhuc::Subtract(SoPhuc sp2)
{
	SoPhuc spS;
	spS.fSoThuc = this->fSoThuc - sp2.fSoThuc;
	spS.fSoAo = this->fSoAo - sp2.fSoAo;
	return spS;
}

SoPhuc SoPhuc::Add(SoPhuc sp2)
{
	SoPhuc spA;
	spA.fSoThuc = this->fSoThuc + sp2.fSoThuc;
	spA.fSoAo = this->fSoAo + sp2.fSoAo;
	return spA;
}

