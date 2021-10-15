#include "SoPhuc.h"

SoPhuc::SoPhuc()
{
	this->fThuc = 0; this->fAo = 0;
}

SoPhuc::SoPhuc(float thuc, float ao)
{
	this->fThuc = thuc;
	this->fAo = ao;
}

SoPhuc::SoPhuc(float thuc )
{
	this->fThuc = thuc; 
	this->fAo = 0;
}

SoPhuc SoPhuc::operator+(SoPhuc a)
{
	SoPhuc c;
	c.fThuc = a.fThuc + this->fThuc;
	c.fAo = a.fAo + this->fAo;
	return c;
}

SoPhuc SoPhuc::operator-(SoPhuc a)
{
	SoPhuc c;
	c.fThuc = this->fThuc - a.fThuc;
	c.fAo = this->fAo - a.fAo;
	return c;
}

SoPhuc SoPhuc::operator=(SoPhuc a)
{
	this->fThuc = a.fThuc;
	this->fAo = a.fAo;
	return SoPhuc();
}

SoPhuc SoPhuc::operator++()
{
	this->fThuc += 1;
	return *this;
}

SoPhuc SoPhuc::operator--()
{
	this->fThuc -= 1;
	return *this;
}

SoPhuc SoPhuc::operator++(int)
{
	SoPhuc t = *this;
	this->fThuc += 1;
	return t;
}

SoPhuc SoPhuc::operator--(int)
{
	SoPhuc t = *this;
	this->fThuc -= 1;
	return t;
}

SoPhuc::~SoPhuc()
{
}
