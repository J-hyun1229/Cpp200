#include <iostream>

using namespace std;

void F1(int arr[2][2]) {
	arr[0][0] = 1000;
}

void F2(int arr[][2], int row) {
	arr[row - 2][1] = 2000;
}

void F3(int* arr, int row, int col) {
	*((arr + row - 1) + col - 1) = 3000; // arr[1][0] = 3000;
}

int main() {
	int data[2][2] = { {1, 2}, {3,4} };

	F1(data);
	F2(data, 2);
	F3(*data, 2, 2);

	cout << "== °á°ú ==" << endl;
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++)
			cout << data[i][j] << endl;
	}

	return 0;
}