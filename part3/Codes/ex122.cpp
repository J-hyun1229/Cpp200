#include <iostream>

using namespace std;

int getOne() {
	return 1;
}

int Plus(int x, int y = getOne(), int z = 1) {
	return x + y + z;
}

int main() {
	int n1 = Plus(1);
	int n2 = Plus(1, 2);
	int n3 = Plus(1, 2, 3);

	cout << "res: " << n1 << ", " << n2 << ", " << n3 << endl;

	return 0;

}