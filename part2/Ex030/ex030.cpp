#include <iostream>

using namespace std;

int main() {
	int n1 = 65;
	double n2 = 23.4;

	int n3 = int(n2);
	double n4 = double(n1 / n2);

	char ch = char(n1);

	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl;
	cout << "n3: " << n3 << endl;
	cout << "n4: " << n4 << endl;
	cout << "ch: " << ch << endl;

	return 0;
}