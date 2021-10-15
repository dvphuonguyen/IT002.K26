#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Quaternion
{
private:
    int iChieu1;
    int iChieu2;
    int iChieu3;
    int iChieu4;
public:
    Quaternion()
    {
        this->iChieu1 = 0;
        this->iChieu2 = 0;
        this->iChieu3 = 0;
        this->iChieu4 = 0;
    }
    friend istream& operator>>(istream& is, Quaternion& qTamThoi)
    {
        is >> qTamThoi.iChieu1;
        is >> qTamThoi.iChieu2;
        is >> qTamThoi.iChieu3;
        is >> qTamThoi.iChieu4;
        return is;
    }
    friend ostream& operator<<(ostream& os, Quaternion qTamThoi)
    {
        os << "(" << qTamThoi.iChieu1 << "," << qTamThoi.iChieu2 << "," << qTamThoi.iChieu3 << "," << qTamThoi.iChieu4 << ")";
        return os;
    }
    Quaternion operator+(Quaternion qTamThoi)
    {
        Quaternion qTong;
        qTong.iChieu1 = this->iChieu1 + qTamThoi.iChieu1;
        qTong.iChieu2 = this->iChieu2 + qTamThoi.iChieu2;
        qTong.iChieu3 = this->iChieu3 + qTamThoi.iChieu3;
        qTong.iChieu4 = this->iChieu4 + qTamThoi.iChieu4;
        return qTong;
    }
    Quaternion operator-(Quaternion qTamThoi)
    {
        Quaternion qHieu;
        qHieu.iChieu1 = this->iChieu1 - qTamThoi.iChieu1;
        qHieu.iChieu2 = this->iChieu2 - qTamThoi.iChieu2;
        qHieu.iChieu3 = this->iChieu3 - qTamThoi.iChieu3;
        qHieu.iChieu4 = this->iChieu4 - qTamThoi.iChieu4;
        return qHieu;
    }
    ~Quaternion()
    {

    }
};

int main()
{
    Quaternion a, b;
    cin >> a >> b;
    cout << a + b;
    cout << endl;
    cout << a - b;
    system("pause");
    return 0;
}