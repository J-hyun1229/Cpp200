#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i) { return (i % 2) == 1; }

int main() {

	vector<int> d1{ 1,2,3 };
	vector<int> d2{ 4,5,6 };
	vector<int> d3{ 7,8,9 };

	vector<int> res;

	copy_if(d1.begin(), d1.end(), back_inserter(res), IsOdd);

	copy_if(d2.begin(), d2.end(), back_inserter(res), [](int arg) {
		return arg < 5; });

	copy_if(d3.begin(), d3.end(), back_inserter(res), [](int arg) {
		return arg > 8; });

	cout << "== res ==" << endl;
	for (int x : res)
		cout << x << ", ";

	return 0;

}