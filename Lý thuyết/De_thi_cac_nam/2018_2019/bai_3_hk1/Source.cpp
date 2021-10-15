#include <iostream>
#include <vector>
#include <string>
using namespace std;
class CCustomer
{
protected:
	string sName;
	string sID;
	int iType;
	int iMonth;
public:
	CCustomer() {
		this->sName = this->sID = "";
		this->iType = 0;
		this->iMonth = 0;
	}
	virtual int getType() {
		return this->iType;
	}
	virtual string getName() {
		return this->sName;
	}
	virtual void Input(){
		cout << "Nhap ho ten khach hang: "; getline(cin, this->sName);
		cout << "Nhap cmnd khach hang: "; getline(cin, this->sID);
		cout << "Nhap so thang cua goi cuo can dang ki: "; cin >> this->iMonth;
	}
	virtual void Output() {
		cout << this->sName << " - " << this->sID << " - " << this->iMonth;
	}
	virtual int iSum_of_fee() {
		return 0;
	}
	~CCustomer() {

	}
};
class CPremium :public CCustomer {
private:
	int iBasic_fee;
	int iCourse_fee;
	int iNumber_of_class;
	int iService_fee;
	int iAssistant_fee;
public:
	CPremium() {
		this->iBasic_fee = 1000;
		this->iCourse_fee = 0;
		this->iNumber_of_class = 0;
		this->iService_fee = 0;
		this->iAssistant_fee = 0;
		this->iType = 1;
	}
	string getName() {
		return this->sName;
	}
	int getType() {
		return this->iType;
	}
	void Input() {
		CCustomer::Input();
		cout << "Nhap so lop hoc dang ki: "; cin >> this->iNumber_of_class;
	}
	void Output() {
		CCustomer::Output();
		cout << " - " << this->iBasic_fee*this->iMonth<<" voi so thang la "<<this->iMonth << " - " << this->iCourse_fee * this->iNumber_of_class << " voi solop hoc la: " << this->iNumber_of_class << " - " << this->iAssistant_fee << " - " << this->iService_fee << " \n";
	}
	int iSum_of_fee() {
		return this->iBasic_fee * this->iMonth + this->iCourse_fee * this->iNumber_of_class + this->iService_fee + this->iAssistant_fee;
	}
	~CPremium() {

	}

};
class CBasic :public CCustomer {
private:
	int iBasic_fee;
	int iCourse_fee;
	int iNumber_of_class;
	int iAssistant_fee;
public:
	CBasic() {
		this->iBasic_fee = 500;
		this->iCourse_fee = 100;
		this->iNumber_of_class = 0;
		this->iAssistant_fee = 100;
		this->iType = 2;
	}
	string getName() {
		return this->sName;
	}
	int getType() {
		return this->iType;
	}
	void Input() {
		CCustomer::Input();
		cout << "Nhap so lop hoc dang ki: "; cin >> this->iNumber_of_class;
	}
	void Output() {
		CCustomer::Output();
		cout << " - " << this->iBasic_fee * this->iMonth << " voi so thang la " << this->iMonth << " - " << this->iCourse_fee * this->iNumber_of_class << " voi solop hoc la: " << this->iNumber_of_class << " - " << this->iAssistant_fee <<  " \n";
	}
	int iSum_of_fee() {
		return this->iBasic_fee * this->iMonth + this->iCourse_fee * this->iNumber_of_class + this->iAssistant_fee;
	}
	~CBasic() {

	}

};
class CNon_member :public CCustomer {
private:
	int iBasic_fee;
	int iAssistant_fee;
public:
	CNon_member() {
		this->iBasic_fee = 200;
		this->iAssistant_fee = 200;
		this->iType = 3;
	}
	string getName() {
		return this->sName;
	}
	int getType() {
		return this->iType;
	}
	void Input() {
		CCustomer::Input();
	}
	void Output() {
		CCustomer::Output();
		cout << " - " << this->iBasic_fee * this->iMonth << " voi so thang la " << this->iMonth << " - " << this->iAssistant_fee  << " \n";
	}
	int iSum_of_fee() {
		return this->iBasic_fee*this->iMonth + this->iAssistant_fee;
	}
	~CNon_member() {

	}

};
class CFitness_center {
private:
	vector <CCustomer*> vGuess;
public:
	CFitness_center() {
	}
	void Input() {
		CCustomer* a = NULL;
		cout << "Menu : \n\tNhap 1 de dang ki goi Premium\n\tNhap 2 de dang ki goi Basic\n\tNhap 3 de dang ki goi Non_member\n\tNhap 0 khi muon dung qua trinh dang ki\n";
		int x;
		do {
			cout << "Nhap goi dich vu ban muon : "; cin >> x;
			switch (x) {
			case 0:
				break;
			case 1:
				a = new CPremium();
				cin.ignore();
				a->Input();
				vGuess.push_back(a);
				break;
			case 2:
				a = new CBasic();
				cin.ignore();
				a->Input();
				vGuess.push_back(a);
				break;
			case 3:
				a = new CNon_member();
				cin.ignore();
				a->Input();
				vGuess.push_back(a);
				break;
			}
		} while (x != 0);
	}
	void Output() {
		for (int i = 0; i < vGuess.size(); i++) {
			vGuess[i]->Output();
		}
	}
	void Max_fee() {
		int m = 0;
		for (int i = 1; i < vGuess.size(); i++) {
			if (vGuess[i]->iSum_of_fee() > vGuess[m]->iSum_of_fee()) {
				m = i;
			}
		}
		cout << "Khach hang chi tieu nhieu nhat la: ";
		vGuess[m]->Output();
	}
	void Tu_van_chon_goi() {
		for (int i = 0; i < vGuess.size(); i++) {
			cout << "Khach hang " << vGuess[i]->getName() << " co tong chi phi la " << vGuess[i]->iSum_of_fee() << " dang su dung goi dich vu ";
			if (vGuess[i]->getType() == 1) cout << "Premium\n";
			else if (vGuess[i]->getType() == 2) cout << "Basic\n";
			else cout << "Non_member\n";
			if (vGuess[i]->getType() == 1) {
				cout << "Cam on quy khach da dang ki goi Premium\n";
			}
			else if (vGuess[i]->getType() == 2) {
				if (vGuess[i]->iSum_of_fee() < 1000)
					cout << "Cam on quy khach da dang ki goi Basic\n";
				else if (vGuess[i]->iSum_of_fee() >= 1000)
					cout << "Quy khach nen chuyen qua goi Premium de tiet kiem chi phi hon\n";
			}
			else {
				if (vGuess[i]->iSum_of_fee() <= 200) {
					cout << "Cam on quy khach da dang ki goi Non_member\n";
				}
				if (vGuess[i]->iSum_of_fee() >= 1000) {
					cout << "Quy khach nen chuyen qua goi Premium de tiet kiem chi phi hon\n";
				}
				else if (vGuess[i]->iSum_of_fee() >= 500)
					cout << "Quy khach nen chuyen qua goi Basic de tiet kiem chi phi hon\n";
			}
		}
	}
	~CFitness_center() {

	}
};
int main()
{
	CFitness_center a;
	a.Input();
	a.Output();
	a.Max_fee();
	a.Tu_van_chon_goi();
	return 0;
}