#include "Vecto.h"

Vecto::Vecto()
{
	this->vecto = new int;
	this->iSoLuong = 0;
}

Vecto::Vecto(int iSoLuong)
{
	this->vecto = new int[iSoLuong];
	this->iSoLuong = iSoLuong;
}

Vecto::Vecto(int* vecto, int iSoLuong)
{ 
	this->vecto = new int[iSoLuong];
	this->iSoLuong = iSoLuong;
	for (int i = 0; i < this->iSoLuong; i++) {
		this->vecto[i] = vecto[i];
	}
}

Vecto::Vecto(const Vecto& a)
{
	this->vecto = new int[a.iSoLuong];
	this->iSoLuong = a.iSoLuong;
	for (int i = 0; i < this->iSoLuong; i++) {
		this->vecto[i] = a.vecto[i];
	}
}

void Vecto::Nhap()
{
	cin >> this->iSoLuong;
	for (int i = 0; i < this->iSoLuong; i++) {
		cin >> this->vecto[i];
	}
}

void Vecto::Xuat()
{
	for (int i = 0; i < this->iSoLuong; i++) {
		cout << this->vecto[i] << " ";
	}
	cout << endl;
}

void Vecto::Add(Matrix matrix , Vecto vecto)
{
	if (vecto.iSoLuong == matrix.iColumn && matrix.iRow == 1) {
		this->iSoLuong = vecto.iSoLuong;
		for (int i = 0; i < this->iSoLuong; i++) {
			this->vecto[i] = 0;
			this->vecto[i] = vecto.vecto[i] + matrix.matrix[0][i];
		}
		Xuat();
	}
	else cout << "Khong hop le" << endl;
}

void Vecto::Mul(Matrix matrix, Vecto vecto)
{
	if (vecto.iSoLuong == matrix.iRow) {
		this->iSoLuong = matrix.iColumn;
		for (int i = 0; i < 1; i++) {
			for (int k = 0; k < this->iSoLuong; k++) {
				this->vecto[k] = 0;
				for (int j = 0; j < matrix.iRow; j++) {
					this->vecto[k] = this->vecto[k] + vecto.vecto[j] * matrix.matrix[j][k];
				}
			}
		}
		Xuat();
	}
	else cout << "Khong hop le" << endl;
}

Vecto::~Vecto()
{
	delete[]vecto;
}
