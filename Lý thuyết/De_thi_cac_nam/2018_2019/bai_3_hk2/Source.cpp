#include <iostream>
#include <vector>
#include <string>
using namespace std;
class COcean {
protected:
	int iType;
	int iThongSo;
public:
	COcean() {
		this->iThongSo = 0;
		this->iType = 0;
	}
	virtual int getType() {
		return this->iType;
	}
	virtual int getThongSo() {
		return this->iThongSo;
	}
	virtual void Input() {
		cout << "Nhap thong so : "; cin >> this->iThongSo;
	}
	virtual void Output() {
		cout << this->iThongSo;
	}
	~COcean() {

	}
};
class CO :public COcean {
private:
public:
	CO() {
		COcean();
		this->iType = 1;
	}
	int getType() {
		return this->iType;
	}
	int getThongSo() {
		return this->iThongSo;
	}
	void Input() {
		cout << "\tOpenness to Experience\n";
		COcean::Input();
	}
	void Output() {
		cout << "O"; COcean::Output();
	}
	~CO() {

	}
};
class CC :public COcean {
private:
public:
	CC() {
		COcean();
		this->iType = 2;
	}
	int getType() {
		return this->iType;
	}
	int getThongSo() {
		return this->iThongSo;
	}
	void Input() {
		cout << "\tCoscientiousness\n";
		COcean::Input();
	}
	void Output() {
		cout << "C"; COcean::Output();
	}
	~CC() {

	}
};
class CE :public COcean {
private:
public:
	CE() {
		COcean();
		this->iType = 3;
	}
	int getType() {
		return this->iType;
	}
	int getThongSo() {
		return this->iThongSo;
	}
	void Input() {
		cout << "\tExtraversion\n";
		COcean::Input();
	}
	void Output() {
		cout << "E"; COcean::Output();
	}
	~CE() {

	}
};
class CA :public COcean {
private:
public:
	CA() {
		COcean();
		this->iType = 4;
	}
	int getType() {
		return this->iType;
	}
	int getThongSo() {
		return this->iThongSo;
	}
	void Input() {
		cout << "\tAgreeableness\n";
		COcean::Input();
	}
	void Output() {
		cout << "A"; COcean::Output();
	}
	~CA() {

	}
};
class CN :public COcean {
private:
public:
	CN() {
		COcean();
		this->iType = 5;
	}
	int getType() {
		return this->iType;
	}
	int getThongSo() {
		return this->iThongSo;
	}
	void Input() {
		cout << "\tNeuroticism\n";
		COcean::Input();
	}
	void Output() {
		cout << "N"; COcean::Output();
	}
	~CN() {

	}
};
class CPersonality {
private :
	string sName;
	vector<COcean*> person;
public:
	CPersonality() {
		sName = "";
	}
	string getName() {
		return this->sName;
	}
	void Input() {
		COcean *a = NULL;
		cout << "Nhap ten :"; getline(cin, this->sName);
		for (int i = 1; i <= 5; i++) {
			if (i == 1) {
				a = new CO();
			}
			else if (i == 2) {
				a = new CC();
			}
			else if (i == 3) {
				a = new CE();
			}
			else if (i == 4) {
				a = new CA();
			}
			else {
				a = new CN();
			}
			a->Input();
			person.push_back(a);
		}
	}
	void Output() {
		cout << this->sName << " co thong tin nhu sau: \n";
		for (int i = 0; i < person.size(); i++) {
			if (i < person.size() - 1) {
				person[i]->Output();
				cout << " - ";
			}
			else
			{
				person[i]->Output();
				cout << " \n ";
			}
		}
	}
	void Info_about_personality() {
		cout << this->sName << " co thong tin nhu sau: \n";
		for (int i = 0; i < person.size(); i++) {
			if (person[i]->getType() == 1) {
				person[i]->Output();
				cout << " - ";
				if (person[i]->getThongSo() >= 70) {
					cout << "Nguoi co diem cao o yeu to nay thuong la nguoi thich nhung y tuong moi me, thich hieu biet nhieu linh vuc, nhung dong thoi cung thich tu do, khong thich bi rang buoc...\n";
				}
				else if (person[i]->getThongSo() <= 30) {
					cout << "Nguoi cos diem thap o yeu to nay thuoc kha bao thu, kho tiep nhan nhung y tuong moi, la. Ho thich su on dinh, quen thuoc, thuc te.\n";
				}
				else {
					cout << "Khong xac dinh ro.\n";
				}
			}
			else if (person[i]->getType() == 2) {
				person[i]->Output();
				cout << " - ";
				if (person[i]->getThongSo() >= 70) {
					cout << "Nguoi co diem cao o yeu to nay thuong la nguoi cham chi, co kha nang chiu ap luc tot. Ho thuong la nguoi gan bo, trung thanh voi to chuc.\n";
				}
				else if (person[i]->getThongSo() <= 30) {
					cout << "Nguoi cos diem thap o yeu to nay thuong de bo cuoc, kha nang chiu ap luc, kha nang chiu ap luc, tuan thu ki luat to chuc kem.\n";
				}
				else {
					cout << "Khong xac dinh ro.\n";
				}
			}
			else if (person[i]->getType() == 3) {
				person[i]->Output();
				cout << " - ";
				if (person[i]->getThongSo() >= 70) {
					cout << "Nguoi co diem cao o yeu to nay thuong la nguoi nhiet tinh, nang doc, co giao tiep tot, thich the hien ban than.\n";
				}
				else if (person[i]->getThongSo() <= 30) {
					cout << "Nguoi co diem thap o yeu to nay thuong ngai giao tiep, khong thich su noi bat, thich duoc lam viec doc lap.\n";
				}
				else {
					cout << "Khong xac dinh ro.\n";
				}
			}
			else if (person[i]->getType() == 4) {
				person[i]->Output();
				cout << " - ";
				if (person[i]->getThongSo() >= 70) {
					cout << "Nguoi co diem cao o yeu to nay thuong than thien, coi mo, dong cam voi moi nguoi nhung nhieu khi \"thieu chinh kien\".\n";
				}
				else if (person[i]->getThongSo() <= 30) {
					cout << "Nguoi cos diem thap o yeu to nay thuong dat loi ich cua ban than len tren, it dong cam, chia se voi dong nghiep, co tinh canh tranh cao.\n";
				}
				else {
					cout << "Khong xac dinh ro.\n";
				}
			}
			else if (person[i]->getType() == 5) {
				person[i]->Output();
				cout << " - ";
				if (person[i]->getThongSo() >= 70) {
					cout << "Nguoi co diem cao o yeu to nay thuong co cac cam xuc tieu cuc nhu: lo lang, buc boi, tu ti, yeu duoi va kha nang chiu ap luc kem.\n";
				}
				else if (person[i]->getThongSo() <= 30) {
					cout << "Nguoi cos diem thap o yeu to nay thuong kiem soat duoc cam xuc, ung pho voi cang thang tot, it bi ben ngoai anh huong den tzm trang cua ban than.\n";
				}
				else {
					cout << "Khong xac dinh ro.\n";
				}
			}
		}
	}
	void Notify() {
		int s = 0;
		cout <<"Sau khi xem xet thi "<< this->sName << " : \n";
		for (int i = 0; i < person.size(); i++) {
			if (person[i]->getType() == 2) {
				if (person[i]->getThongSo() >= 70 || person[i]->getThongSo() <= 30) {
					person[i]->Output();
					cout << " - ";
					cout << "Nha tuyen dung/ to chuc/ doanh nghiep can luu y.\n";
				}
				s += 1;
			}
			else if (person[i]->getType() == 5) {
				if (person[i]->getThongSo() >= 70) {
					person[i]->Output();
					cout << " - ";
					cout << "Nha tuyen dung/ to chuc/ doanh nghiep can luu y.\n";
				}
				s += 1;
			}
			else if (person[i]->getType() == 3 && person[i + 2]->getType() == 5) {
				if (person[i]->getThongSo() <= 30 || person[i + 2]->getThongSo() >= 70) {
					person[i]->Output();
					cout << " - ";
					person[i + 2]->Output();
					cout << " - ";
					cout << "Nha tuyen dung/ to chuc/ doanh nghiep can luu y.\n";
				}s += 1;
			}
		}
		if (s == 0) cout << "Binh thuong.\n";
	}
	~CPersonality() {

	}
};
class CPeople {
private:
	vector<CPersonality> people;
public:
	CPeople() {

	}
	void Input() {
		CPersonality a;
		cout << "Nhap 0 khi muon dung qua tinh xet nhan vien.\nNhap 1 de tiep tuc qua trinh.\n";
		int x;
		while(true) {
			cout << "Nhap gia tri : "; cin >> x;
			if (x == 0) break;
			else {
				cin.ignore();
				a.Input();
				people.push_back(a);
			}
		}
	}
	void Output() {
		for (int i = 0; i < people.size(); i++) {
			people[i].Output();
		}
	}
	void Info_about_personality() {
		for (int i = 0; i < people.size(); i++) {
			people[i].Info_about_personality();
		}
	}
	void Notify(string name) {
		for (int i = 0; i < people.size(); i++) {
			if (people[i].getName() == name) {
				people[i].Notify();
			}
		}
	}
	~CPeople() {

	}
};
int main() {
	CPersonality a;
	//cin.ignore();
	a.Input();
	a.Output();
	a.Info_about_personality();
	a.Notify();
	string name;
	CPeople b;
	b.Input();
	b.Output();
	b.Info_about_personality();
	cin.ignore();
	cout << "Nhap ten: ";
	getline(cin, name);
	b.Notify(name);
	return 0;
}