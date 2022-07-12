#include <iostream>

using namespace std;

int main() {
	int d1[3] = { 0,1,2 };

	d1[0] += 10;
	d1[1] = 100;
	d1[2] -= 2;

	for (int i : d1)
		cout << i << endl;

	return 0;
}