#include <iostream>

using namespace std;

int main() {

	int x = 10;
	int y = 20;
	double a = 12.2;
	double b = 5.6;

	string s = "abc";

	cout << boolalpha;
	cout << isgreater(20, 11) << endl; // return 20 > 11
	cout << isgreater(x, y) << endl;
	cout << isgreater(a, b) << endl;
	cout << isgreater(x, b) << endl; // isgreater(int, double) -> ����ȯ �ʿ� X.
	// cout << isgreater(x, s) << endl; string�� �� �ȵ�.

	return 0;
}