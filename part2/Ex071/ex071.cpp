#include <iostream>

using namespace std;

int main() {
	const int kSize = 3;

	int nums[kSize] = { 10,20,30 };
	int* p1 = nums;

	cout << p1[0] << endl;

	int n1 = 1, n2 = 2, n3 = 3;
	int* p2[kSize] = { &n1, &n2, &n3 };

	for (int i = 0; i < kSize; i++)
		cout << "Pointer1[" << i << "] = " << *(p1 + i) << endl;
	for (int i = 0; i < kSize; i++)
		cout << "Pointer2[" << i << "] = " << *p2[i] << endl;

	return 0;
}