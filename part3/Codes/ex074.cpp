#include <iostream>

using namespace std;

void Func(int arg) {
	cout << "���� ��: " << arg << endl;
	arg += 10;
	cout << "���� ��: " << arg << endl;
}

int main() {
	int y = 10;

	Func(y);

	cout << "�Լ� ���� ��: " << y << endl;

	return 0;
}