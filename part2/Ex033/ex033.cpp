#include <iostream>
#include <string>

using namespace std;

int main() {
	int n1 = 100;
	int n2 = 200;
	int n3 = 300;

	if (n1 > n2 && n1 > n3)
		cout << "���� ū ���� n1: " << n1 << endl;
	else if (n2 > n1 && n2 > n3)
		cout << "���� ū ���� n2: " << n2 << endl;
	else if (n3 > n1 && n3 > n2)
		cout << "���� ū ���� n3: " << n3 << endl;
	else
		cout << "ã�� �� �����ϴ�." << endl;

	return 0;
}