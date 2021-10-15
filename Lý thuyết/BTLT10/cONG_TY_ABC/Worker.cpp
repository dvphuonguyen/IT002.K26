#include "Worker.h"

Worker::Worker()
{
	Employee::type = 2;
}

void Worker::input()
{
	Employee::input();
	cout << "Nhap so san pham: "; cin >> this->number_of_product;
}

void Worker::output()
{
	Employee::output();
	cout << " - " << this->number_of_product;
}

float Worker::salary()
{
	return Employee::basic_salary + this->number_of_product * 2000;
}

Worker::~Worker()
{
}
