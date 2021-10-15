#include <iostream>
using namespace std;
class cDaThuc {
private:
	int iHeSo;
	int* iCoSo;
public:
	cDaThuc()
	{
		this->iCoSo = NULL;
		this->iHeSo = 0;
	}
	friend istream& operator>>(istream& is, cDaThuc& a)
	{
		cout << "Nhap he so toi da: "; is >> a.iHeSo;
		a.iCoSo = new int[a.iHeSo];
		for (int i = a.iHeSo; i > -1; i--)
		{
			cout << "Nhap co so cua he so " << i << " la: "; is >> a.iCoSo[i];
		}
		return is;
	}
	friend ostream& operator<<(ostream& os, cDaThuc a)
	{
		for (int i = a.iHeSo; i > -1; i--)
		{
			if(i==a.iHeSo)
				os << a.iCoSo[i] << "x^" << i;
			else {
				if (a.iCoSo[i] > 0)
					os << "+" << a.iCoSo[i] << "x^" << i;
				else 
					os << a.iCoSo[i] << "x^" << i;
			}
		}
		os << "\n";
		return os;
	}
	cDaThuc operator+(cDaThuc a)
	{
		cDaThuc b;
		if (this->iHeSo > a.iHeSo) b.iHeSo = this->iHeSo;
		else b.iHeSo = a.iHeSo;
		b.iCoSo = new int[b.iHeSo];
		if (this->iHeSo > a.iHeSo) {
			for (int i = 0; i <= a.iHeSo; i++)
			{
				b.iCoSo[i] = a.iCoSo[i] + this->iCoSo[i];
			}
			for (int i = a.iHeSo + 1; i <= this->iHeSo; i++)
			{
				b.iCoSo[i] = this->iCoSo[i];
			}
		}
		else {
			for (int i = 0; i <= this->iHeSo; i++)
			{
				b.iCoSo[i] = a.iCoSo[i] + this->iCoSo[i];
			}
			for (int i = this->iHeSo + 1; i <= a.iHeSo; i++)
			{
				b.iCoSo[i] = a.iCoSo[i];
			}
		}
		return b;
	}
	cDaThuc operator-(cDaThuc a)
	{
		cDaThuc b;
		if (this->iHeSo > a.iHeSo) b.iHeSo = this->iHeSo;
		else b.iHeSo = a.iHeSo;
		b.iCoSo = new int[b.iHeSo];
		if (this->iHeSo > a.iHeSo) {
			for (int i = 0; i <= a.iHeSo; i++)
			{
				b.iCoSo[i] = -a.iCoSo[i] + this->iCoSo[i];
			}
			for (int i = a.iHeSo + 1; i <= this->iHeSo; i++)
			{
				b.iCoSo[i] = this->iCoSo[i];
			}
		}
		else {
			for (int i = 0; i <= this->iHeSo; i++)
			{
				b.iCoSo[i] = - a.iCoSo[i] + this->iCoSo[i];
			}
			for (int i = this->iHeSo + 1; i <= a.iHeSo; i++)
			{
				b.iCoSo[i] = -a.iCoSo[i];
			}
		}
		return b;
	}
	~cDaThuc()
	{
		//delete this->iCoSo;
	}
};
int main()
{
	cDaThuc a, b;
	cin >> a;
	cout << a;
	cin >> b;
	cout << b;
	cout << "Tong: " << a + b;
	cout << "Hieu: " << a - b;
	return 0;
}