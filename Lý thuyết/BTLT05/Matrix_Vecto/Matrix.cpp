#include "Matrix.h"

Matrix::Matrix()
{
	this->matrix  =new int*[0];
	this->iColumn = 0;
	this->iRow = 0;
}

Matrix::Matrix(int row)
{
	this->matrix = new int* [row];
	this->iColumn = 0;
	this->iRow = row;
	for (int i = 0; i < this->iRow; i++) {
		matrix[i] = new int[this->iColumn];
	}
	for (int i = 0; i < this->iRow; i++) {
		for (int j = 0; j < this->iColumn; j++) {
			matrix[i][j] = i+j;
		}
	}
}

Matrix::Matrix(int **m, int r, int c)
{
	this->matrix = new int* [r];
	this->iColumn = c;
	this->iRow = r;
	for (int i = 0; i < this->iRow; i++) {
		this->matrix[i] = new int[this->iColumn];
	}
	for (int i = 0; i < this->iRow; i++) {
		for (int j = 0; j < this->iColumn; j++) {
			this->matrix[i][j] = m[i][j];
		}
	}
}

Matrix::Matrix(const Matrix& a)
{
	this->matrix = new int* [a.iRow];
	this->iColumn = a.iColumn;
	this->iRow = a.iRow;
	for (int i = 0; i < this->iRow; i++) {
		this->matrix[i] = new int[this->iColumn];
	}
	for (int i = 0; i < this->iRow; i++) {
		for (int j = 0; j < this->iColumn; j++) {
			this->matrix[i][j] = a.matrix[i][j];
		}
	}
}

void Matrix::Nhap()
{
	cin >> this->iRow;
	cin >> this->iColumn;
	this->matrix = new int *[this->iRow];
	for (int i = 0; i < this->iRow; i++) {
		this->matrix[i] = new int[this->iColumn];
	}
	for (int i = 0; i < this->iRow; i++) {
		for (int j = 0; j < this->iColumn; j++) {
			cin >> matrix[i][j];
		}
	}
}

void Matrix::Xuat()
{
	for (int i = 0; i < this->iRow; i++) {
		for (int j = 0; j < this->iColumn; j++) {
			cout<< matrix[i][j]<<" ";
		}
		cout << endl;
	}
}

void Matrix::Add(Matrix matrix, Vecto vecto)
{
	if (vecto.iSoLuong == matrix.iColumn && matrix.iRow == 1) {
		this->iColumn= matrix.iColumn;
		this->iRow = 1;
		for (int i = 0; i < this->iRow; i++) {
			this->matrix[i] = new int[this->iColumn];
		}
		for (int i = 0; i < this->iColumn; i++) {
			this->matrix[0][i] = vecto.vecto[i] + matrix.matrix[0][i];
		}
		Xuat();
	}
	else cout << "Khong hop le" << endl;
}

void Matrix::Mul(Matrix matrix, Vecto vecto)
{
	if (matrix.iColumn == 1) {
		this->iColumn = vecto.iSoLuong;
		this->iRow = matrix.iRow;
		for (int i = 0; i < this->iRow; i++) {
			this->matrix[i] = new int[this->iColumn];
		}
		for (int i = 0; i < this->iRow; i++) {
			for (int j = 0; j < this->iColumn; j++) {
				this->matrix[i][j] = matrix.matrix[i][0] * vecto.vecto[j];
			}
		}
		Xuat();
	}
	else cout << "Khong hop le" << endl;
}

Matrix::~Matrix(){
	delete []matrix[0];
}
