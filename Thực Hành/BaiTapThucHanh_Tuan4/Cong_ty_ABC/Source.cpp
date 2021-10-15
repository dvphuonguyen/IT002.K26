#include <iostream>
#include <string>
using namespace std;
static int total_products = 0;
static int total_days = 0;

class  Company {
protected:
    int type;
    string name;
    float salary;
public:
    Company() {
        this->name = "";
        this->salary = 0;
    }
    Company(int type) {
        this->name = "";
        this->salary = 0;
        this->type = type;
    }
    ~Company() { }
    virtual void Nhap() {
        cin >> this->name;
    }
    int getType() { return this->type; }
    void Xuat() {
        cout << this->name << ": " << this->salary << endl;

    }
    virtual void setSalary() {

    }

    virtual void setSalary(int, int) {

    }
};

class Worker : public  Company {
private:
    float basic_salary;
    float number_of_products;
public:
    Worker() {
        Company();
        this->type = 1;
    }
    void Nhap() {
        Company::Nhap();
        cin >> this->basic_salary;
        cin >> this->number_of_products;
        total_products += this->number_of_products;

    }
    void setSalary() {
        this->salary = this->basic_salary + 5 * this->number_of_products;
    }
};

class Officer : public  Company {
private:

    float number_of_days;
public:
    Officer() {
        Company();
        this->type = 2;
    }
    void Nhap() {
        Company::Nhap();
        cin >> this->number_of_days;
        total_days += this->number_of_days;
    }
    void setSalary() {
        this->salary = 100 * this->number_of_days;
    }
};

class Manager : public  Company {
private:
public:
    Manager() {
        Company();
        this->type = 3;
    }
    void Nhap() {
        Company::Nhap();
    }
    void setSalary(int total_days, int total_products) {
        this->salary = 100 + total_days * 40 + total_products * 2;
    }
};




int main() {
    int n;
    cin >> n;
    Company* company[100];
    for (int i = 0; i < n; i++) {
        int type; cin >> type;
        switch (type)
        {
        case 1:
            company[i] = new Worker();
            break;
        case 2:
            company[i] = new Officer();
            break;
        case 3:
            company[i] = new Manager();
            break;
        default:
            break;
        }

        cin.ignore();
        company[i]->Nhap();

    }
    for (int i = 0; i < n; i++) {
        if (company[i]->getType() != 3) {
            company[i]->setSalary();
        }
        else {
            company[i]->setSalary(total_days, total_products);
        }
        company[i]->Xuat();
    }

 
    return 0;
}