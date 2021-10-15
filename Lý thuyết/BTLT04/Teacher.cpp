#include "Teacher.h"

Teacher::Teacher()
{
	sName = "Nguyen Van A";
	sMaSoGV = "A12345";
	Date dNgaySinh;
	iAge = 0;
	iSoNamCongTac = 0;
}

Teacher::Teacher(string Name)
{
	sName = Name;
	sMaSoGV = "A12345";
	Date dNgaySinh(5);
	iAge = 0;
	iSoNamCongTac = 0;
}

Teacher::Teacher(int age)
{
	sName = "Nguyen Van A";
	sMaSoGV = "A12345";
	Date dNgaySinh(5);
	iAge = age;
	iSoNamCongTac = 0;
}

Teacher::Teacher(Teacher& b, Date& x)
{
	sName = b.sName;
	sMaSoGV = b.sMaSoGV;
	Date dNgaySinh(x);
	iAge = b.iAge;
	iSoNamCongTac = b.iSoNamCongTac;
}

void Teacher::Input()
{
	cout << "Nhap so luong giao vien : "; cin >> iSoLuong;
	dNgaySinh = new Date[iSoLuong];
	a = new Teacher[iSoLuong];
	for (int i = 0; i < iSoLuong; i++)
	{
		cout << "Nhap thong tin cua giao vien thu " << i << " la: " << endl;
		cout << "Nhap ten giao vien: "; cin.ignore(); getline(cin, a[i].sName);
		cout << "Nhap ma so giao vien: "; cin.ignore(); getline(cin, a[i].sMaSoGV);
		cout << "Ngay sinh cua giao vien : " << endl;
		dNgaySinh[i].Nhap();
		cout << "Nhap tuoi cua giao vien: "; cin >>a[i].iAge;
		cout << "Nhap so nam cong tac cua giao vien: "; cin >> a[i].iSoNamCongTac;
		cout << endl;
	}
}

void Teacher::Output()
{
	for (int i = 0; i < iSoLuong; i++)
	{
		cout << "Xuat thong tin ua giao vien thu " << i << " la: " << endl;
		cout << "Xuat ho ten giao vien :" << a[i].sName << endl;
		cout << "Xuat ma so giao vien :" << a[i].sMaSoGV << endl;
		cout << "Xuat ngay thang nam sinh cua giao vien : ";
		dNgaySinh[i].Xuat();
		cout << "Xuat tuoi cua giao vien : " << a[i].iAge << endl;
		cout << "Xuat so nam cong tac cua giao vien : " << a[i].iSoNamCongTac << endl;
		cout << endl;
	}
}

void Teacher::Luong()
{
	int s;
	for (int i = 0; i < iSoLuong; i++)
	{
		if (a[i].iSoNamCongTac > 30)
		{
			s = 5000000 * 2;
		}
		else
		{
			s = 5000000;
		}
		cout << "Xuat ho ten giao vien :" << a[i].sName << endl;
		cout << "Xuat ma so giao vien :" << a[i].sMaSoGV << endl;
		cout << "Xuat ngay thang nam sinh cua giao vien : ";
		dNgaySinh[i].Xuat();
		cout << "Xuat tuoi cua giao vien : " << a[i].iAge << endl;
		cout << "Xuat so nam cong tac cua giao vien : " << a[i].iSoNamCongTac << endl;
		cout << "Xuat tien luong cua giao vien : " << s << endl;
		cout << endl;
	}
}

Teacher::~Teacher()
{
	return;
}


