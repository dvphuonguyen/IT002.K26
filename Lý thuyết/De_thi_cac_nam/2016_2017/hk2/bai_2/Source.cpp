#include <iostream>
#include<vector>
using namespace std;
int Mu(int x, int n)
{
	int s = 1;
	for (int i = 0; i < n; i++)
	{
		s *= x;
	}
	return s;
}
class BacHai {
private:
	int iHeSo;
	vector<int>iCoSo;
public:
	BacHai()
	{
		this->iHeSo = 2;
	}
	void input()
	{
		this->iCoSo.resize(2 + 1);
		for (int i = this->iHeSo; i >= 0; i--)
		{
			cout << "Nhap co so cua bac " << i << " la: "; cin >> this->iCoSo[i];
		}
	}
	int XuatGiaTri(int x)
	{
		int s = 0;
		for (int i = this->iHeSo; i >= 0; i--)
		{
			s += this->iCoSo[i] * Mu(x, i);
		}
		return s;
	}
	BacHai operator+(BacHai a)
	{
		BacHai b;
		b.iCoSo.resize(2 + 1);
		for (int i = this->iHeSo; i >= 0; i--)
		{
			b.iCoSo[i] = this->iCoSo[i] + a.iCoSo[i];
		}
		return b;
	}
	void Output()
	{
		for (int i = this->iHeSo; i >= 0; i--)
		{
			if (i == this->iHeSo) {
				cout << this->iCoSo[i] << "x^" << i;
			}
			else {
				if (this->iCoSo[i] > 0)
				{
					cout<<" + "<< this->iCoSo[i] << "x^" << i;
				}
				else if (this->iCoSo[i] < 0)
				{
					cout << " - " << -this->iCoSo[i] << "x^" << i;
				}
			}
		}
		cout << "\n";
	}
	~BacHai()
	{

	}
};
int main()
{
	BacHai a, b, c;
	int x;
	a.input();
	cout << "F(a) = ";
	a.Output();
	b.input();
	cout << "F(b) = ";
	b.Output();
	cout << "F(c) = F(a) + F(b) = ";
	c = a + b;
	c.Output();
	cout << "Nahp gia tri x= "; cin >> x;
	cout << "Tai x = " << x << " thi F(c) = " << c.XuatGiaTri(x);
	return 0;
}