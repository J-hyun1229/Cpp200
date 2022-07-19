#include <iostream>
#include <string>

using namespace std;

class Info {
public:
	Info() {}
	
	string name;
	int year;

};

class GoodKing :public Info {
private:
	string country;

public:
	GoodKing(const string country):country(country) { }

	void Display() {
		cout << country << " " << name << " �������� BC: " << year << endl;
	}
};

class BadKing :public Info {
private:
	string country;

public:
	BadKing(const string country) :country(country) { }

	void Display() {
		cout << country << " " << name << " �������� BC: " << year << endl;
	}
};

int main() {
	GoodKing gk1("������");
	gk1.name = "�ܱ��հ�";
	gk1.year = 2333;

	BadKing gk2("���");
	gk2.name = "������";
	gk2.year = 1330;

	gk1.Display();

	gk2.Display();

	return 0;
}