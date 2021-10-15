#pragma once
#include<iostream>
#include "Vecto.h"
using namespace std;
class Vecto;
class Matrix
{
private:
	int** matrix;
	int iRow;
	int iColumn;
public:
	Matrix();
	Matrix(int row);
	Matrix(int **m, int r, int c);
	Matrix(const Matrix& a);
	int getRow() {
		return this->iRow;
	}
	int getColumn() {
		return this->iColumn;
	}
	void setRowint (int r) {
		this->iRow = r;
	}
	void setColumn(int c) {
		this->iColumn = c;
	}
	void Nhap();
	void Xuat();
	friend class Vecto;
	//friend void Vecto::Add(Matrix matrix, Vecto vecto);
	//friend void Vecto::Mul(Matrix matrix, Vecto vecto);
	void Add(Matrix matrix, Vecto vecto);
	void Mul(Matrix matrix, Vecto vecto);
	~Matrix();
};

