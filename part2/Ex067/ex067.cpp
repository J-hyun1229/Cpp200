#include <iostream>
#include <string>

using namespace std;

int main() {
	int n1 = 10;
	double n2 = 67.8;

	string no_str1 = to_string(n1);
	string no_str2 = to_string(n2);

	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl;

	return 0;
}