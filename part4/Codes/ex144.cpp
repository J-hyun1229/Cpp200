#include <iostream>

using namespace std;

constexpr int getNumber1() {
	return 2;
}

constexpr int getNumber2(int x, int y) {
	return x + y;
}

int main() {

	const int length = 5;

	int arr1[getNumber1()];
	int arr2[getNumber2(1, 2)];
	int arr3[length];

	cout << sizeof(arr1) << ", " << sizeof(arr2) << ", " << sizeof(arr3) << endl;

	return 0;
}