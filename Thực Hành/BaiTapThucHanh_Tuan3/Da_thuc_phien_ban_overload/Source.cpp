#include <iostream>
using namespace std;
class DaThuc {
private:
	int n;
	int* a;
public:
	DaThuc() {
		this->n = 0;
		this->a = NULL;
	}
	void nhap() {
		cin >> this->n;
		this->a = new int[this->n + 1];
		for (int i = 0; i <= this->n; i++) {
			cin >> a[i];
		}
	}
    DaThuc operator+(DaThuc b) {
        DaThuc c;
        if (this->n >= b.n) c.n = this->n;
        else c.n = b.n;
        c.a = new int[c.n + 1];
        if (this->n >= b.n) {
            for (int i = 0; i <= this->n; i++) {
                if (i <= b.n) {
                    c.a[i] = this->a[i] + b.a[i];
                }
                else c.a[i] = this->a[i];
            }
        }
        else {
            for (int i = 0; i <= b.n; i++) {
                if (i <= this->n) {
                    c.a[i] = this->a[i] + b.a[i];
                }
                else c.a[i] = b.a[i];
            }
        }
        return c;
    }
    DaThuc operator-(DaThuc b) {
        DaThuc c;
        if (this->n >= b.n) c.n = this->n;
        else c.n = b.n;
        c.a = new int[c.n + 1];
        if (this->n >= b.n) {
            for (int i = 0; i <= this->n; i++) {
                if (i <= b.n) {
                    c.a[i] = this->a[i] - b.a[i];
                }
                else c.a[i] = this->a[i];
            }
        }
        else {
            for (int i = 0; i <= b.n; i++) {
                if (i <= this->n) {
                    c.a[i] = this->a[i] - b.a[i];
                }
                else c.a[i] = -b.a[i];
            }
        }
        return c;
    }
    DaThuc operator*(DaThuc b) {
        DaThuc c;
        c.n = this->n + b.n;
        c.a = new int[c.n + 1];
        for (int i = 0; i <= this->n; i++)
            for (int j = 0; j <= b.n; j++)
                c.a[i + j] += this->a[i] * b.a[j];
        return c;
    }
    void xuat() {
        for (int i = 0; i <= this->n; i++) {
            if (this->a[i] != 0) {
                if (i == 0) {
                    cout << this->a[i] << "x^0";
                }
                else {
                    if (this->a[i] < 0) cout << this->a[i] << "x^" << i;
                    else cout << "+" << this->a[i] << "x^" << i;
                }
            }
        }
    }
    ~DaThuc() {}
};
int main() {
    DaThuc a, b, c;
    a.nhap(); b.nhap();
    string s;
    cin >> s;
    if (s == "+") {
        c = a + b;
        c.xuat();
    }
    else if(s == "-") {
        c = a - b;
        c.xuat();
    }
    else if (s == "*") {
        c = a * b;
        c.xuat();
    }
    return 0;
}