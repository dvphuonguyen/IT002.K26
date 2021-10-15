#include "Matrix.h"
#include"Vecto.h"

int main() {
	Vecto A,C,D;
	Matrix B,E,F;
	cout << "Nhap vecto A co n phan tu" << endl;
	A.Nhap();
	cout << "Xuat vecto A" << endl;
	A.Xuat();
	cout << "Nhap matrix B co m hang va n cot" << endl;
	B.Nhap();
	cout << "Xuat matrix B " << endl;
	B.Xuat();
	cout << "Tong giua vecto va ma tran theo vecto la: " << endl;
	C.Add(B, A);
	cout << "Tich giua vecto va ma tran theo vecto la: " << endl;
	D.Mul(B, A);
	cout << "Tong giua vecto va ma tran theo matrix la: " << endl;
	E.Add(B, A);
	cout << "Tich giua vecto va ma tran theo matrix la: " << endl;
	F.Mul(B, A);
	return 0;
}