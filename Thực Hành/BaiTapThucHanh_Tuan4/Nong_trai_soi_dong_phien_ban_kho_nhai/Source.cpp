#include <iostream>
#include <cstring>
using namespace std;

class animal {
protected:
    int quantity;
    int milk;
    int type;
    string name;
    string speak;

public:
    void setSpeak() {
        for (int i = 0; i < this->quantity - 1; i += 1) {
            cout << this->speak << ",";
        }
        cout << this->speak;
    }
    virtual void setMilk(int n) {
        int q = this->quantity;
        int QuanTiTy = 0;
        int MiLk = 0;
        if (this->type == 4) {
            int a[2] = { 0,0 };
            for (int i = 0; i < n; i += 1) {
                QuanTiTy = q;
                /*for (int j = 1; j > 0; j -= 1) {
                    a[j] = a[j - 1];
                }
                */
                a[1] = a[0];
                a[0] = q / 2;
                q += a[1];
            }
            for (int i = 0; i < 2; i += 1)
                QuanTiTy += a[i];
            MiLk = 0;
        }
        else {
            int a[4] = { 0,0,0,0 };
            for (int i = 0; i < n; i += 1) {
                QuanTiTy = q;
                MiLk += QuanTiTy * this->milk;
                for (int j = 3; j > 0; j -= 1) {
                    a[j] = a[j - 1];
                }
                a[0] = q / 2;
                q += a[3];
            }
            for (int i = 0; i < 4; i += 1)
                QuanTiTy += a[i];
        }
        cout << this->name << ": " << QuanTiTy << "," << MiLk << "\n";
    }
};

class cow : public animal {
private:
    
public:
    void input(int n) {
        animal::quantity = n;
        animal::name = "Bo";
        animal::speak = "Booo";
        animal::milk = 10;
        animal::type = 1;
    }
    void setSpeak() {
        animal::setSpeak();
    }
    void setMilk(int n) {
        animal::setMilk(n);
    }
};

class sheep : public animal {
public:
    void input(int n) {
        animal::quantity = n;
        animal::name = "Cuu";
        animal::speak = "Beee";
        animal::milk = 5;
        animal::type = 2;
    }
    void setSpeak() {
        animal::setSpeak();
    }
    void setMilk(int n) {
        animal::setMilk(n);
    }
};

class lamb : public animal {
public:
    void input(int n) {
        animal::quantity = n;
        animal::name = "De";
        animal::speak = "Eeee";
        animal::milk = 8;
        animal::type = 3;
    }
    void setSpeak() {
        animal::setSpeak();
    }
    void setMilk(int n) {
        animal::setMilk(n);
    }
};

class rabit : public animal {
public:
    void input(int n) {
        animal::quantity = n;
        animal::name = "Tho";
        animal::speak = "";
        animal::milk = 0;
        animal::type = 4;
    }
    void setSpeak() {
        animal::setSpeak();
    }
    void setMilk(int n) {
        animal::setMilk(n);
    }
};


int main() {
    int n1, n2, n3, n4, n;
    cin >> n1 >> n2 >> n3 >> n4 >> n;
    cow a; sheep b; lamb c; rabit d;
    a.input(n1); b.input(n2); c.input(n3); d.input(n4);
    a.setSpeak(); cout << ","; b.setSpeak(); cout << ","; c.setSpeak(); cout << ","; d.setSpeak(); cout << "\n";
    a.setMilk(n); b.setMilk(n); c.setMilk(n); d.setMilk(n);
    return 0;
}