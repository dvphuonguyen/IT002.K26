#include <iostream>

using namespace std;

struct node {
    double val;
    node* next;
};
class list {
private:
    node* head, * tail;
public:
    void init() {
        this->head = this->tail = nullptr;
    }

    node* getnode(double x) {
        node* p = new node;
        p->val = x;
        p->next = NULL;
        return p;
    }

    int length() {
        int s = 0;
        node* p = this->head;
        while (p != NULL) {
            s++;
            p = p->next;
        }
        return s;
    }

    void _0(double x) {
        node* p = getnode(x);
        if (this->head == NULL) {
            this->head = this->tail = p;
        }
        else {
            this->tail->next = p;
            this->tail = p;
        }
    }

    node* tim_kiem(double x) {
        if (this->head == NULL)
            return NULL;
        else {
            node* p = this->head;
            while (p != this->tail) {
                if (p->next->val == x) return p;
                p = p->next;
            }
        }
        return NULL;
    }

    void delete_head() {
        if (this->head == NULL) {
            return;
        }
        else if (this->head == this->tail) {
            delete this->head;
            this->head = this->tail = NULL;
        }
        else {
            node* p = this->head;
            this->head = this->head->next;
            delete p;
        }
    }

    void _1(double x) {
        if (this->head == NULL)
            return;
        else if (this->head->val == x)
            this->delete_head();
        else {
            node* q = this->tim_kiem(x);
            if (q != NULL) {
                if (q == this->tail)
                    return;
                else if (q->next == this->tail) {
                    delete this->tail;
                    q->next = NULL;
                    this->tail = q;
                }
                else {
                    node* p = q->next;
                    q->next = p->next;
                    delete p;
                }
            }
        }
    }

    void _2(double x) {
        if (this->head == NULL);
        else if (this->head->val == x)
            this->delete_head();
        int s = 0;
        node* q = this->head;
        while (q != NULL) {
            if (q->val == x) s += 1;
            q = q->next;
        }
        for (int i = 0; i < s; i++)
            this->_1(x);
    }

    void _3(double x, int y) {
        node* p = this->head;
        for (int i = 1; i <= y; i++) {
            p = p->next;
        }
        p->val = x;
    }

    void xuat() {
        node* p = this->head;
        if (p == NULL) cout << "[]";
        else {
            cout << "[";
            while (p != NULL) {
                if (p == this->tail)cout << p->val << "]";
                else cout << p->val << ",";
                p = p->next;
            }
        }

    }
};


int main() {
    list l;  l.init();
    int n, y;
    double x;
    do {
        cin >> n;
        switch (n) {
        case 0:
            cin >> x;
            l._0(x);
            break;
        case 1:
            cin >> x;
            l._1(x);
            break;
        case 2:
            cin >> x;
            l._2( x);
            break;
        case 3:
            cin >> y;
            cin >> x;
            if (y > -1 && y < l.length())
                l._3(x, y);
            break;
        }
    } while (n != -1);
    l.xuat();
    return 0;
}