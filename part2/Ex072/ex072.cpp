#include <iostream>

using namespace std;

int Temp1(const int arg) {
	int n = 20;

	return n + 1;
}

int Temp2(const int arg) {
	int n = arg;
	return n + 1;
}

int main() {
	int n = 10;

	int rtn1 = Temp1(n);
	int rtn2 = Temp2(n);

	cout << "���� �Լ� n: " << n << endl;
	cout << "Temp1 �Լ� n: " << rtn1 << endl;
	cout << "Temp2 �Լ�n :" << rtn2 << endl;

	return 0;
}