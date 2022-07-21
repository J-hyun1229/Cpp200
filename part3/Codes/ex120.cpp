#include <iostream>

using namespace std;

int Plus(int a1, int a2) {
	cout << "Plus(int, int) has benn called" << endl;
	return a1 + a2;
}

double Plus(double a1, double a2) {
	cout << "Plus(double, double) has been called" << endl;
	return a1 + a2;
}

int main() {
	int n1 = Plus(2.0, 4.0);
	double n2 = Plus(1.2, 2.3);

	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl;
}