#include "Teacher.h"
int main()
{
	Date A;
	Date B(25);
	Date C(B);
	A.setDate(31);
	A.setMonth(12);
	A.setYear(2000);
	Teacher a;
	Teacher b("Dao Thi My Le");
	Teacher c(45);
	Teacher d(c,C);
	cout << a.getName() << "\t" << a.getMaSoGV() << "\t(" << A.getDate() << " / " << A.getMonth() << " / " << A.getYear() << ")\t" << a.getAge() << "\t" << a.getSoNamCongTac() << endl;
	a.setName("Tran Hoang Ha");
	a.setMaSoGV("A3429");
	a.setAge(45);
	a.setSoNamCongTac(19);
	cout << "\t\tNhap: " << endl;
	a.Input();
	cout << "\t\tXuat: " << endl;
	a.Output();
	cout << "\t\tXuat co tien luong: " << endl;
	a.Luong();
	system("pause");
	return 0;
}