#include <iostream>

using namespace std;

int main() {
	int n1 = 10;
	int n2 = 20;

	const int* ptr;
	ptr = &n1;
	ptr = &n2;

	int* const ptr2 = &n1;
	*ptr2 = n2;

	return 0;
}