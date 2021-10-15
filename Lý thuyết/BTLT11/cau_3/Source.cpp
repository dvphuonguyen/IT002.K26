#include <iostream>
#include <string>
using namespace std;
class Customer {
protected:
	string sName;
	string sID;
	float fBasic_fee;
	float fAssistant_fee;
	int iType;
public:
	Customer() {
		sName = "";
		sID = "";
		fBasic_fee = fAssistant_fee = 0;
		iType = 0;
	}
	virtual void Input() {
		cout << "Nhap ho ten: "; getline(cin, this->sName);
		cout << "Nhap so CMND: "; getline(cin, this->sID);
	}
	virtual void Output() {
		cout << this->sName << " - " << this->sID;
	}virtual float Sum_of_fee() {
		return 0;
	}
	~Customer() {

	}
};
class Premium :public Customer {
private:
	float fCourse_fee;
	float fService_fee;
	int iClass;
public:
	Premium() {
		Customer();
		Customer::fBasic_fee = 100;
		Customer::iType = 1;
	}
	void Input() {
		Customer::Input();
		cout << "Nhap so lop hoc: "; cin >> this->iClass;
		this->fCourse_fee = 0;
		this->fService_fee = 0;
	}
	float Sum_of_fee() {
		return Customer::fBasic_fee + Customer::fAssistant_fee + this->fCourse_fee + this->fService_fee;
	}
	void Output() {
		Customer::Output();
		cout << " - Premium - " << Customer::fBasic_fee << " - " << Customer::fAssistant_fee << " - " << this->fCourse_fee * this->iClass << " voi " << this->iClass << " class - " << this->fService_fee << "\n";
	}
	~Premium() {
	}
};
class Basic :public Customer {
private:
	float fCourse_fee;
	int iClass;
public:
	Basic() {
		Customer();
		Customer::fBasic_fee = 500;
		Customer::fAssistant_fee = 100;
		Customer::iType = 2;
	}
	void Input() {
		Customer::Input();
		cout << "Nhap so lop hoc: "; cin >> this->iClass;
		this->fCourse_fee = 100;
	}
	float Sum_of_fee() {
		return Customer::fBasic_fee + Customer::fAssistant_fee + this->fCourse_fee * this->iClass;
	}
	void Output() {
		Customer::Output();
		cout << " - Basic - " << Customer::fBasic_fee << " - " << Customer::fAssistant_fee << " - " << this->fCourse_fee * this->iClass << " voi " << this->iClass << " class\n";
	}
	~Basic() {
	}
};
class Non_member :public Customer {
private:
public:
	Non_member() {
		Customer();
		Customer::fBasic_fee = 200;
		Customer::fAssistant_fee = 200;
		Customer::iType = 3;
	}
	void Input() {
		Customer::Input();
	}
	float Sum_of_fee() {
		return Customer::fBasic_fee + Customer::fAssistant_fee;
	}
	void Output() {
		Customer::Output();
		cout << " - Non_member - " << Customer::fBasic_fee << " - " << Customer::fAssistant_fee << "\n";
	}
	~Non_member() {
	}
};
class Fitness_center {
private:
	int iSoLuong;
	Customer** a;
public:
	Fitness_center() {
		a = NULL;
		iSoLuong = 0;
	}
	void Input() {
		/*
		cout << "Nhap so luong khach hang: "; cin >> this->iSoLuong;
		a = new Customer * [this->iSoLuong];
		cout << "Menu: 1_Premium\t2_Basic\t3_Non_member\n";
		for (int i = 0; i < this->iSoLuong; i++) {
			int x; 
			cout << "Chon the loai: "; cin >> x;
			switch (x) {
			case 1:
				a[i] = new Premium();
				break;
			case 2:
				a[i] = new Basic();
				break;
			case 3:
				a[i] = new Non_member();
				break;
			}
			cin.ignore();
			a[i]->Input();
		}
		*/
		cout << "Menu: 1_Premium\t2_Basic\t3_Non_member\n";
		cout << "Nhap x=0 de cham dut thao tac them khach hang\n";
		this->a = new Customer * [100000];
		this->iSoLuong = 0;
		int x;
		do {
			cout << "Chon the loai: "; cin >> x;
			this->iSoLuong += 1;
			switch (x) {
			case 1:
				a[this->iSoLuong - 1] = new Premium();
				break;
			case 2:
				a[this->iSoLuong - 1] = new Basic();
				break;
			case 3:
				a[this->iSoLuong - 1] = new Non_member();
				break;
			}
			if (x != 0) {
				cin.ignore();
				a[this->iSoLuong - 1]->Input();
			}
		} while (x != 0);
	}
	void Output() {
		for (int i = 0; i < this->iSoLuong; i++) {
			a[i]->Output();
		}
	}
	void Max_fee() {
		int max = 0;
		for (int i = 1; i < this->iSoLuong; i++) {
			if (a[i]->Sum_of_fee() > a[max]->Sum_of_fee()) max = i;
		}
		a[max]->Output();
		cout << "Voi muc chi tieu la: " << a[max]->Sum_of_fee() << "\n";
		if (a[max]->Sum_of_fee() >= 1000) cout << "Khac hang nen chuyen qua goi Premium\n";
		else if (a[max]->Sum_of_fee() >= 500 && a[max]->Sum_of_fee() < 1000) cout << "Khach hang nen chuyen qua goi Basc\n";
		else cout << "Khach hang nen dang ki goi Non_member\n ";
	}
	~Fitness_center() {

	}
};
int main() {
	Fitness_center a;
	cout << "Nhap thong tin: \n";
	a.Input();
	cout << "Xuat thong tin: \n";
	a.Output();
	cout << "Tim khach hang co chi tieu cao nhat va tu van goi dichj vu thich hop: \n";
	a.Max_fee();
	return 0;
}