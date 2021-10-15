#include <iostream>
#include <math.h>
#define PI 3.14
using namespace std;
class point {
private:
    float x;
    float y;
public:
    void nhap() {
        cin >> this->x >> this->y;
    }
    void xuat() {
        cout << "(" << this->x << "," << this->y << ")" << endl;
    }
    void setX(float x) {
        this->x = x;
    }
    void setY(float y) {
        this->y = y;
    }
    float getX() {
        return this->x;
    }
    float getY() {
        return this->y;
    }
};
class triangle {
private:
    point a;
    point b;
    point c;
public:
    void input() {
        a.nhap();
        b.nhap();
        c.nhap();
    }
    void output() {
        a.xuat();
        b.xuat();
        c.xuat();
    }
    void xu_ly(float g, float d) {
        a.setX(a.getX() + cos(g * PI / 180) * d);
        a.setY(a.getY() + sin(g * PI / 180) * d);
        b.setX(b.getX() + cos(g * PI / 180) * d);
        b.setY(b.getY() + sin(g * PI / 180) * d);
        c.setX(c.getX() + cos(g * PI / 180) * d);
        c.setY(c.getY() + sin(g * PI / 180) * d);
    }
};
int main() {
    triangle a;
    a.input();
    float g, d;
    cin >> g >> d;
    a.xu_ly(g, d);
    a.output();
    return 0;
}