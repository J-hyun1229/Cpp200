#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {
	array<int, 5> d1 = { 5,3,1,7,9 };
	array<int, 5> d2 = { 1,3,5,7,9 };
	array<int, 7> d3 = { 2,2,1,3,5,7,9 };

	cout << boolalpha;

	// 지정한 범위 내에서 순서 상관없이 요소가 같으면 true.
	cout << "d1 == d2: " << is_permutation(d1.begin(), d1.end(), d2.begin()) << endl;
	cout << "d1 == d3: " << is_permutation(d1.begin(), d1.end(), d3.begin()) << endl;
	cout << "d1 == d2 (+2): " << is_permutation(d1.begin(), d1.end(), d3.begin() + 2) << endl;

	return 0;

}