#include <iostream>

using namespace std;

int main() {
	int n1 = 10;
	int* p1 = &n1;

	double n2 = 23.4;
	double* p2 = &n2;

	cout << "n1: " << n1 << " (size: " << sizeof(n1) << ')' << endl;
	cout << "p1: " << p1 << " (size: " << sizeof(p1) << ')' << endl;

	cout << "n2: " << n2 << " (size: " << sizeof(n2) << ')' << endl;
	cout << "p2: " << p2 << " (size: " << sizeof(p2) << ')' << endl;

	return 0;
}