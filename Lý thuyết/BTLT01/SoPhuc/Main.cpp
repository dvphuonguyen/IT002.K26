# include "SoPhuc.h"
int main()
{
	SoPhuc sp1, sp2, spA, spS;
	sp1.Input();
	sp2.Input();
	spA = sp1.Add(sp2);
	spA.Output();
	spS = sp1.Subtract(sp2);
	spS.Output();
	system("pause");
	return 0;
}