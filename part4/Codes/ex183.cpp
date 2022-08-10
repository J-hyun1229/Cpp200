#include <iostream>

using namespace std;

int main() {
	double n1 = 1;
	double n2 = 0.4;
	double n3 = 0.0;
	double n4 = 11.2;

	// NAN : Not A Number. nan() 연산결과가 NAN인지 검사. 즉 연산결과가 유효하지 않으면 true.
	cout << boolalpha;
	cout << isnan(n1 / n4) << endl; // isnan(1/11.2)
	cout << isnan(n2 / n3) << endl; // isnan(0.4/0.0)
	cout << isnan(n3 / n3) << endl; // isnan(0.0/0.0)
	cout << isnan(n4 / n1) << endl; // isnan(11.2/1)

	return 0;
}