#include <iostream>
#include<string>
#include<vector>
using namespace std;
class CEmployee
{
protected:
	string sName;
	string sID;
	string sDate;
	int iPhone;
	int iType;
	string sEmail;
	float fBasic_salary;
public:
	CEmployee() {
		this->sName = this->sID = this->sDate = this->sEmail = "";
		this->iPhone = this->iType = 0;
		this->fBasic_salary = 0;
	}
	virtual int getType() {
		return this->iType;
	}
	virtual string getName() {
		return this->sName;
	}
	virtual float Sum_of_salary() {
		return 0;
	}
	virtual void Input() {
		cout << "Nhap ten nhan vien: "; getline(cin, this->sName);
		cout << "Nhap ma nhan vien: "; getline(cin, this->sID);
		cout << "Nhap ngay sinh: "; getline(cin, this->sDate);
		cout << "Nhap email nhan vien: "; getline(cin, this->sEmail);
		cout << "Nhap so dien thoai nhan vien: "; cin >> this->iPhone;
		cout << "Nhap luong co ban: "; cin >> this->fBasic_salary;
	}
	virtual void Output() {
		cout << this->sName << " - " << this->sID << " - " << this->sDate << " - " << this->iPhone << " - " << this->sEmail << " - " << this->fBasic_salary;
	}
	~CEmployee() {

	}
};
class CDeveloper :public CEmployee {
private:
	int iSo_gio_overtime;
public:
	CDeveloper() {
		CEmployee();
		this->iType = 1;
		this->iSo_gio_overtime = 0;
	}
	int getType() {
		return this->iType;
	}
	string getName() {
		return this->sName;
	}
	float Sum_of_salary() {
		return this->fBasic_salary + this->iSo_gio_overtime * 300000;
	}
	void Input() {
		CEmployee::Input();
		cout << "Nhap so gio overtime cua nhan vien: "; cin >> this->iSo_gio_overtime;
	}
	void Output() {
		CEmployee::Output();
		cout << " - " << this->iSo_gio_overtime << "\n";
	}
	~CDeveloper() {

	}
};
class CTester :public CEmployee {
private:
	int iSo_loi_phat_hien_duoc;
public:
	CTester() {
		CEmployee();
		this->iType = 1;
		this->iSo_loi_phat_hien_duoc = 0;
	}
	string getName() {
		return this->sName;
	}
	int getType() {
		return this->iType;
	}
	float Sum_of_salary() {
		return this->fBasic_salary + this->iSo_loi_phat_hien_duoc * 300000;
	}
	void Input() {
		CEmployee::Input();
		cout << "Nhap so loi phat hien duoc: "; cin >> this->iSo_loi_phat_hien_duoc;
	}
	void Output() {
		CEmployee::Output();
		cout << " - " << this->iSo_loi_phat_hien_duoc << "\n";
	}
	~CTester() {

	}
};
class CCompany {
private:
	vector<CEmployee*> vNhanVien;
public:
	CCompany() {

	}
	void Input() {
		cout << "Menu: \nNhap 0 khi muon dung chuong trinh\nNhap 1 khi nhan vien la nha lap trinh\nNhap 2 khi nhan vien la kiem chung vien\n";
		int n;
		CEmployee *a = NULL;
		do {
			cout << "Nhap gia tri: "; cin >> n;
			if (n == 0) break;
			if (n == 1) a = new CDeveloper();
			if (n == 2) a = new CTester();
			cin.ignore();
			a->Input();
			vNhanVien.push_back(a);
		} while (n != 0);
	}
	void Output() {
		for (int i = 0; i < vNhanVien.size(); i++) {
			vNhanVien[i]->Output();
		}
	}
	void Max_salary() {
		int m = 0;
		for (int i = 1; i < vNhanVien.size(); i++) {
			if (vNhanVien[i]->Sum_of_salary() > vNhanVien[i]->Sum_of_salary()) m = i;
		}
		cout << "\tThong tin cua nhan vien co luong cao hat la: \n";
		vNhanVien[m]->Output();
	}
	void Salary() {
		cout << "\tThong tin luong cua cac nhan vien:\n";
		for (int i = 0; i < vNhanVien.size(); i++) {
			cout << vNhanVien[i]->getName() << " - " << vNhanVien[i]->Sum_of_salary() << "\n";
		}
	}
	~CCompany() {

	}
};
int main() {
	CCompany a;
	a.Input();
	a.Output();
	a.Salary();
	a.Max_salary();
	return 0;

}