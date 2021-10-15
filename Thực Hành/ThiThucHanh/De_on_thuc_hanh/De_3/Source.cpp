#include <iostream>
#include <vector>
#include <string>
using namespace std;
class CEmployee {
protected:
	string sName;
	string sAdress;
	string sPlace;
	string sDate;
	int iPhone;
	int iType;
public:
	CEmployee() {
		this->sName = this->sAdress = this->sPlace = this->sDate = "";
		this->iPhone = this->iType = 0;
	}
	virtual int getType() {
		return this->iType;
	}
	virtual float Sum_of_salary() {
		return 0;
	}
	virtual void Input() {
		cout << "Nhap ten nhan vien: "; getline(cin, this->sName);
		cout << "Nhap dia chi nhan vien: "; getline(cin, this->sAdress);
		cout << "Nhap noi o nhan vien: "; getline(cin, this->sPlace);
		cout << "Nhap ngay sinh nhan vien: "; getline(cin, this -> sDate);
		cout << "Nhap so dien thoai: "; cin >> this->iPhone;
	}
	virtual void Output() {
		cout << this->sName << " - " << this->sAdress << " - " << this->sPlace << " - " << this->sDate << " - " << this->iPhone ;
	}
	~CEmployee() {

	}
};
class Cfull_time :public CEmployee {
private:
	float fLuong_thoa_thuan;
	float fPhu_cap_an_trua;
public:
	Cfull_time() {
		CEmployee();
		this->fLuong_thoa_thuan = this->fPhu_cap_an_trua = 0;
		this->iType = 1;
	}
	int getType() {
		return this->iType;
	}
	float Sum_of_salary() {
		return this->fLuong_thoa_thuan * 0.895 + this->fPhu_cap_an_trua;
	}
	void Input() {
		CEmployee::Input();
		cout << "Nhap luong thoa thuan: "; cin >> this->fLuong_thoa_thuan;
		cout << "Nhap phi phu cap thuc an: "; cin >> this->fPhu_cap_an_trua;
	}
	void Output() {
		CEmployee::Output();
		cout << " - " << this->fLuong_thoa_thuan << " - " << this->fPhu_cap_an_trua << "\n";
	}
	~Cfull_time() {

	}
};
class Cpart_time :public CEmployee {
private:
	int iSo_gio_lam_viec;
	float fPhu_cap_di_lai;
public:
	Cpart_time() {
		CEmployee();
		this->iSo_gio_lam_viec = 0;
		this->fPhu_cap_di_lai = 0;
		this->iType = 2;
	}
	int getType() {
		return this->iType;
	}
	float Sum_of_salary() {
		return this->iSo_gio_lam_viec * 40000 + this->fPhu_cap_di_lai;
	}
	void Input() {
		CEmployee::Input();
		cout << "Nhap so gio lam viec: "; cin >> this->iSo_gio_lam_viec;
		cout << "Nhap phi phu cap thuc an: "; cin >> this->fPhu_cap_di_lai;
	}
	void Output() {
		CEmployee::Output();
		cout << " - " << this->iSo_gio_lam_viec << " - " << this->fPhu_cap_di_lai << "\n";
	}
	~Cpart_time() {

	}
};
class CQuanly {
private:
	vector<CEmployee*> vNhanVien;
public:
	CQuanly() {

	}
	void Input() {
		int n;
		CEmployee* a = NULL;
		cout << "Menu: \nNhap 0 de ket thuc qua trinh\nNhap 1 de dang ki lam nhan vien chinh thuc\nNhap 2 de dang ki lam nhan vien thoi vu\n";
		do {
			cout << "Nhap gia tri : "; cin >> n;
			if (n == 0) break;
			if (n == 1) a = new Cfull_time();
			if (n == 2) a = new Cpart_time();
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
	void Max_Salary() {
		int m = 0;
		for (int i = 0; i < vNhanVien.size(); i++) {
			if (vNhanVien[i]->Sum_of_salary() > vNhanVien[m]->Sum_of_salary()) m = i;
		}
		cout << "\tThong tin cua nhan vien co luong cao nhat la: \n";
		vNhanVien[m]->Output();
		cout << "Voi  muc luong la: "; cout << vNhanVien[m]->Sum_of_salary();
	}
	void Mid_Salary() {
		float s = 0;
		for (int i = 0; i < vNhanVien.size(); i++) {
			s += vNhanVien[i]->Sum_of_salary();
		}
		s /= vNhanVien.size();
		cout << "\tThong tin cua nhan vien co luong thap hon luong trung binh la:\n";
		for (int i = 0; i < vNhanVien.size(); i++) {
			if (vNhanVien[i]->Sum_of_salary() < s) {
				vNhanVien[i]->Output();
			}
		}
	}
	~CQuanly() {

	}
};
using namespace std;
int main() {
	CQuanly a;
	a.Input();
	a.Output();
	a.Max_Salary();
	a.Mid_Salary();
	return 0;
}