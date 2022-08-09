#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int data[] = { 1,2,3,4,5,6,7,8,9,10 };
	vector<int> res;

	copy_n(data, 5, back_inserter(res));

	cout << "== res ==" << endl;
	for (auto i : res)
		cout << i << ", ";

	return 0;
}