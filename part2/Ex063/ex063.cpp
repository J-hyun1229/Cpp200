#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1 = "10";
	string str2 = "2.456";
	string str3 = "456 ¹®ÀÚ¿­";

	int n1 = stoi(str1);
	int n2 = stoi(str2);
	int n3 = stoi(str3);

	cout << n1 << ", " << n2 << ", " << n3 << endl;

	return 0;
}