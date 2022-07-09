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

	cout << "메인 함수 n: " << n << endl;
	cout << "Temp1 함수 n: " << rtn1 << endl;
	cout << "Temp2 함수n :" << rtn2 << endl;

	return 0;
}