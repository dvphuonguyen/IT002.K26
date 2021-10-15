#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#define pi 3.14
using namespace std;
class chai
{
protected:
	int iTypeChai;
public:
	chai() 
	{
		this->iTypeChai = 0;
	}
	virtual int getType() {
		return this->iTypeChai;
	}
	virtual float LuongNuoc() = 0;
	virtual float DienTich() = 0;
	virtual void input() = 0;
	~chai() {

	}
};
class hinh_tru_tron : public chai
{
private:
	int chieu_cao;
	int ban_kinh_day;
public:
	int getType() {
		return this->iTypeChai;
	}
	void input() {
		chai::iTypeChai = 1;
		cin >> chieu_cao >> ban_kinh_day;
	}
	float DienTich() {
		return 2 * pi * ban_kinh_day * chieu_cao;
	}
	float LuongNuoc() {
		return 0.1 * pi * chieu_cao * ban_kinh_day * ban_kinh_day;
	}
};
class hinh_hop_chu_nhat : public chai
{
private:
	int chieu_cao;
	int chieu_rong;
	int chieu_dai;
public:
	int getType() {
		return this->iTypeChai;
	}
	void input() {
		chai::iTypeChai = 2;
		cin >> chieu_cao >> chieu_dai >> chieu_rong;
	}
	float DienTich() {
		return 2 * (chieu_cao * chieu_dai + chieu_cao * chieu_rong + chieu_dai * chieu_rong);
	}
	float LuongNuoc() {
		return 0.1 * chieu_cao * chieu_dai * chieu_rong;
	}
};
class hinh_lap_phuong : public chai
{
private:
	int kich_thuoc;
public:
	int getType() {
		return this->iTypeChai;
	}
	void input() {
		chai::iTypeChai = 3;
		cin >> kich_thuoc;
	}
	float DienTich() {
		return 6 * kich_thuoc * kich_thuoc;
	}
	float LuongNuoc() {
		return 0.1 * kich_thuoc * kich_thuoc * kich_thuoc;
	}
};
int main() {
	int n;
	cin >> n;
	chai** a;
	a = new chai * [n];
	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		switch (x) {
		case 1:
			a[i] = new hinh_tru_tron();
			break;
		case 2:
			a[i] = new hinh_hop_chu_nhat();
			break;
		case 3:
			a[i] = new hinh_lap_phuong();
			break;
		}
		a[i]->input();
	}
	float s = 0, v = 0;
	for (int i = 0; i < n; i++) {
		s += a[i]->DienTich();
		v += a[i]->LuongNuoc();
	}
	cout << "Dien tich chai vo: " << s << "\n";
	cout << "Luong nuoc tren mat dat: " << v << "\n";
	return 0;
}