#include <iostream>

using namespace std;

extern int g_number = 100;

int Func1() {
	return g_number++;
}

int Func2() {
	return g_number++;
}

int main() {
	int n = g_number++;

	cout << "¸ŞÀÎ n: " << n << endl;
	cout << "Func1 n: " << Func1() << endl;
	cout << "Func2 n :" << Func2() << endl;

	return 0;
}