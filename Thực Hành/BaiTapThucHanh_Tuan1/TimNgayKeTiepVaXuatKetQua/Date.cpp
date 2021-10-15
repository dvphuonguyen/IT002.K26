#include "Date.h"

void Date::Nhap()
{
	cin >> d >> m >> y;
}


void Date::NextDay()
{
	int s = 0;
	if (this->y < 0)
	{
		s = 1;
	}
	switch (this->m)
	{
	case 1: case 3: case 5: case 7: case 8: case 10:
	{
		if (this->d > 0 && this->d < 31)
		{
			this->d = this->d + 1;
			s = 0;
			break;
		}
		if (this->d == 31)
		{
			this->d = 1;
			this->m = this->m + 1;
			s = 0;
			break;
		}
		
	}
	case 12:
	{
		if (this->d > 0 && this->d < 31)
		{
			this->d = this->d + 1;
			s = 0;
			break;
		}
		if (this->d == 31)
		{
			this->d = 1;
			this->m = 1;
			this->y = this->y + 1;
			s = 0;
			break;
		}
		
	}
	case 4: case 6: case 9: case 11:
	{
		if (this->d > 0 && this->d < 30)
		{
			this->d = this->d + 1;
			s = 0;
			break;
		}
		if (this->d == 30)
		{
			this->d = 1;
			this->m = this->m + 1;
			s = 0;
			break;
		}
		
	}
	case 2:
	{
		if (NamNhuan(this->y) == 1)
		{
			if (this->d > 0 && this->d < 29)
			{
				this->d = this->d + 1;
				s = 0;
				break;
			}
			if (this->d == 29)
			{
				this->d = 1;
				this->m = this->m + 1;
				s = 0;
				break;
			}
			
		}
		else
		{
			if (this->d > 0 && this->d < 28)
			{
				this->d = this->d + 1;
				s = 0;
				break;
			}
			if (this->d == 28)
			{
				this->d = 1;
				this->m = this->m + 1;
				s = 0;
				break;
			}
			
		}
	}
	default:
	{
		s = 1;
		break;
	}
	}
	if (s == 0)
	{
		cout << d << "/" << m << "/" << y;
	}
	else
	{
		cout << "ERROR";
	}
}



int NamNhuan(int a)
{
	if (a % 400 == 0)
		return 1;
	if (a % 4 == 0 && a % 100 != 0)
		return 1;
	return 0;
}

int main()
{
	Date a;
	a.Nhap();
	a.NextDay();
	return 0;
}