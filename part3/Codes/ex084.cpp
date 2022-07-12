#include <iostream>

using namespace std;

int main() {

	int d1[2][2] = { 1,2,3 };
	int d2[2][3] = { {1, } };

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			cout << "data1[" << i << "][" << j << "] = " << d1[i][j] << endl;

	cout << endl;


	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 3; j++)
			cout << "data2[" << i << "][" << j << "] = " << d2[i][j] << endl;

	return 0;

}