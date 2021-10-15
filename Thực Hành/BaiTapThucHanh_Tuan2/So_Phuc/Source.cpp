#include <iostream>
using namespace std;
class SoPhuc {
private:
    float thuc;
    float ao;
public:
    SoPhuc() {
        this->thuc = 0;
        this->ao = 0;
    }
    SoPhuc(float thuc) {
        this->thuc = 1;
        this->ao = 0;
    }
    SoPhuc(float thuc, float ao) {
        this->thuc = 1;
        this->ao = 1;
    }
    SoPhuc(const SoPhuc& a) {
        this->thuc = a.thuc;
        this->ao = a.ao;
    }
    void Nhap() {
        cin >> this->thuc >> this->ao;
    }
    void xuly(SoPhuc a, SoPhuc b, int& s) {
        s = 0;
        if ((a.ao == 0 && a.thuc == 0) || (b.ao == 0 && b.thuc == 0)) {
            s = 1;
        }
        SoPhuc A, B, C, D;
        // c1+c2
        A.thuc = a.thuc + b.thuc;
        A.ao = a.ao + b.ao;
        //c2-2c1
        B.thuc = b.thuc - 2 * a.thuc;
        B.ao = b.ao - 2 * a.ao;
        //c1-4c2
        C.thuc = a.thuc - 4 * b.thuc;
        C.ao = a.ao - 4 * b.ao;
        //A*B
        D.thuc = A.thuc * B.thuc - A.ao * B.ao;
        D.ao = A.thuc * B.ao + A.ao * B.thuc;
        //D/C
        float x = C.thuc * C.thuc + C.ao * C.ao;
        if (x == 0) {
            s = 1;
        }
        else {
            this->thuc = (D.thuc * C.thuc + D.ao * C.ao) / x;
            this->ao = (D.ao * C.thuc - C.ao * D.thuc) / x;
        }
    }
    void xuat(int s) {
        if (s == 1) cout << "ERROR";
        else {
            if (this->thuc != 0) {
                cout << this->thuc << " ";
                if (this->ao != 0) {
                    if (this->ao > 0) {
                        if (this->ao == 1)
                            cout << "+ i";
                        else
                            cout << "+ " << this->ao << "i";
                    }
                    else {
                        if (this->ao == -1)
                            cout << "- i";
                        else
                            cout << "- " << -this->ao << "i";
                    }
                }
            }
            else {
                if (this->ao != 0) {
                    if (this->ao > 0) {
                        if (this->ao == 1)
                            cout << " i";
                        else
                            cout << this->ao << "i";
                    }
                    else {
                        if (this->ao == -1)
                            cout << "- i";
                        else
                            cout << "- " << -this->ao << "i";
                    }
                }
                else cout << "0";
            }
        }
    }
    ~SoPhuc() {}
};
int main() {
    SoPhuc a, b, c;
    int s=0;
    a.Nhap();
    b.Nhap();
    c.xuly(a, b, s);
    c.xuat(s);
    return 0;
}