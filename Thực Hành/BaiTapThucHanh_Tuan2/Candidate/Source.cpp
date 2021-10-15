#include<iostream>
#include<string>
using namespace std;
class Candidate
{
private:
	Candidate* A;
	int stt;
	string ma;
	string name;
	string ngaysinh;
	int diemtoan;
	int diemvan;
	int diemanh;
public:
	Candidate() {
		this->stt = 0;
		this->ma = "A123";
		this->name = "Nguyen Van A";
		this->diemtoan=this->diemvan=this->diemanh = 0;
	}
	Candidate(int diemtoan) {
		this->stt = 0;
		this->ma = "A123";
		this->name = "Nguyen Van A";
		this->diemtoan = 8;
		this->diemvan = this->diemanh = 0;
	}
	Candidate(string ma, int diemtoan)
	{
		this->stt = 0;
		this->ma = "C135";
		this->name = "Nguyen Van A";
		this->diemtoan = 8;
		this->diemvan = this->diemanh = 0;
	}
	Candidate(const Candidate& a)
	{
		this->stt = a.stt;
		this->ma = a.ma;
		this->name = a.name;
		this->ngaysinh = a.ngaysinh;
		this->diemtoan = a.diemtoan;
		this->diemvan = a.diemvan;
		this->diemanh = a.diemanh;
	}
	void nhap(int &n) {
		cin >> n;
		A = new Candidate[n];
		for (int i = 0; i < n; i++)
		{
			cin.ignore();
			A[i].stt = i + 1;
			getline(cin, A[i].ma);
			getline(cin, A[i].name);
			getline(cin, A[i].ngaysinh);
			do {
				cin >> A[i].diemtoan;
				cin >> A[i].diemvan;
				cin >> A[i].diemanh;
			} while (A[i].diemanh < 0 || A[i].diemanh>10 || A[i].diemvan < 0 || A[i].diemvan>10 || A[i].diemtoan < 0 || A[i].diemtoan>10);
		}
	}
	void xuat(int n) {
		int s = 0;
		for (int i = 0; i < n; i++)
		{
			if ((A[i].diemanh + A[i].diemtoan + A[i].diemvan) > 15) {
				s = 1;
				cout << "-" << endl;
				cout << "STT " << A[i].stt << ":" << endl;
				cout << "Thong tin hoc sinh:" << endl;
				cout << "Ma: " << A[i].ma << endl;
				cout << "Ho ten: " << A[i].name << endl;
				cout << "Ngay sinh: " <<A[i].ngaysinh << endl;
				cout << "Diem toan: " << A[i].diemtoan << endl;
				cout << "Diem van: " << A[i].diemvan << endl;
				cout << "Diem anh: " << A[i].diemanh << endl;
			}
		}
		if (s == 0) {
			cout << "Khong co thi sinh co tong diem lon hon 15" << endl;
		}
	}
	~Candidate() {
	}
};
int main()
{
	int n;
	Candidate a;
	a.nhap(n);
	a.xuat(n);
	return 0;
}