#include <iostream>
#include <string>

using namespace std;

void Func1(int& arg) {
	cout << "���� ��: " << arg << endl;
	arg += 10;
	cout << "���� ��: " << arg << endl;
}

void Func2(string& info) {
	info += "981��";
}

int main() {
	int y = 10;
	Func1(y);

	cout << "Func1() ���� �� y: " << y << endl;

	string king_info = "��� ���� ������: ";
	Func2(king_info);
	cout << king_info << endl;


	return 0;
}