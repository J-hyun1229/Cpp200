#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> n1({ 1,2,3,4,5 });
	vector<int> n2;

	copy(n1.begin(), n1.end(), back_inserter(n2));

	for (auto i : n2)
		cout << i << endl;

	double n3[5] = { 1.2, 3.4, 4.5, 5.6, 6.77 };
	double n4[5];

	copy(begin(n3), end(n3), begin(n4));

	for (auto i : n4)
		cout << i << endl;

	return 0;

}