#include <iostream>
#include <string>
using namespace std;
class Book {
protected:
	string name;
	string author;
	int number;
public:
	Book() {
		this->name = "";
		this->author = "";
	}
	virtual void input() {
		cin >> this->name;
		cin >> this->author;
	}
	virtual void output() {
		cout << this->name << " - " << this->author << " - ";
	}
};
class SachGiaoKhoa : public Book {
private:
	string subject;
public:
	SachGiaoKhoa() {
		Book();
		this->subject = "";
	}
	void input() {
		Book::input();
		cin >> this->subject;
	}
	void output() {
		Book::output();
		cout << this->subject;
	}
};
class Cartoon:public Book {
private:
	string type;
public:
	Cartoon() {
		Book();
		this->type = "";
	}
	void input() {
		Book::input();
		cin >> this->type;
	}
	void output() {
		Book::output();
		cout << this->type;
	}
};

class Magazine : public Book {
private:
	string publisher;
public:
	Magazine() {
		Book();
		this->publisher = "";
	}
	void input() {
		Book::input();
		cin >> this->publisher;
	}
	void output() {
		Book::output();
		cout << this->publisher;
	}
};
int main() {
	int n; cin >> n;
	int x;
	Book* books[100];
	for (int i = 0; i < n; i++) {
		cin >> x;
		switch (x) {
		case 1:
			books[i] = new SachGiaoKhoa();
			cin.ignore();
			books[i]->input();
			break;
		case 2:
			books[i] = new Cartoon();
			cin.ignore();
			books[i]->input();
			break;
		case 3:
			books[i] = new Magazine();
			cin.ignore();
			books[i]->input();
			break;
		}
		
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " - ";
		books[i]->output();
		cout << endl;
	}
	return 0;
}