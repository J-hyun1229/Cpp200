#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main() {
	vector<int> d1 = { 1,3,5,7,9 };
	vector<int> d2 = { 2,4,6,7,9 };
	vector<int> diff1;
	vector<int> diff2;

	// d1 - d2
	set_difference(d1.begin(), d1.end(), d2.begin(), d2.end(), inserter(diff1, diff1.begin()));

	// d1 - d2
	set_difference(d1.begin() + 2, d1.end(), d2.begin() + 2, d2.end(), inserter(diff2, diff2.end()));

	cout << "== diff1 ==" << endl;
	for (auto i : diff1)
		cout << i << ", ";

	cout << endl << "== diff2 ==" << endl;
	for (auto i : diff2)
		cout << i << ", ";

	return 0;
}