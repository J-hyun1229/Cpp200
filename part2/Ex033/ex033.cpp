#include <iostream>
#include <string>

using namespace std;

int main() {
	int n1 = 100;
	int n2 = 200;
	int n3 = 300;

	if (n1 > n2 && n1 > n3)
		cout << "가장 큰 수는 n1: " << n1 << endl;
	else if (n2 > n1 && n2 > n3)
		cout << "가장 큰 수는 n2: " << n2 << endl;
	else if (n3 > n1 && n3 > n2)
		cout << "가장 큰 수는 n3: " << n3 << endl;
	else
		cout << "찾을 수 없습니다." << endl;

	return 0;
}