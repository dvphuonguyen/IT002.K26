#pragma once
// ma tran 1 hang va n cot
#include <iostream>
#include"Matrix.h"
using namespace std;
class Matrix;
class Vecto
{
private:
	int* vecto;
	int iSoLuong;
public:
	Vecto();
	Vecto(int iSoLuong);
	Vecto(int* vecto, int iSoLuong);
	Vecto(const Vecto& a);
	int getiSoluong() {
		return this->iSoLuong;
	}
	void setiSoLuong(int s) {
		this->iSoLuong = s;
	}
	void Nhap();
	void Xuat();
	void Add(Matrix matrix, Vecto vecto);
	void Mul(Matrix matrix, Vecto vecto);
	friend class Matrix;
	//friend void Matrix::Add(Matrix matrix, Vecto vecto);
	//friend void Matrix::Mul(Matrix matrix, Vecto vecto);
	~Vecto();
};

