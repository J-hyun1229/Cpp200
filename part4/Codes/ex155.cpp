#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> d({ 1,2,3 });

	for (vector<int>::iterator it = d.begin(); it != d.end(); ++it) {
		cout << *it << ", ";
	}

	cout << endl;

	for (auto it = d.cbegin(); it != d.cend(); ++it) {
		cout << *it << ", ";
	}

	cout << endl;

	for (auto it = d.rbegin(); it != d.rend(); ++it) {
		cout << *it << ", ";
	}
	cout << endl;

	d.clear();

	return 0;
}