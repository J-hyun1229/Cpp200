// ex1-8, 1-9

#include <iostream>

using namespace std;

int main() {
	int x = 10;
	int y = 1;

	if (x > y)
		cout << "x>y" << endl;
	else
		cout << "x<=y" << endl;

	int s1 = 0;
	int s2 = 0;

	int one = 1;
	int two = 2;

	for (int i = 0; i < 5; i++) {
		s1 += one;
		s2 += two;
	}

	cout << "°á°ú: " << s1 << ", " << s2 << endl;

	return 0;
}