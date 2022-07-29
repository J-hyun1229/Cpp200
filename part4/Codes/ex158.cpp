#include <iostream>
#include <list>

using namespace std;

int main() {
	list<int> d1;
	list<int> d2{ 3,4,5 };
	d1.push_back(2);
	d1.push_back(7);

	d1.merge(d2);

	cout << "== List Merge ==" << endl;
	for (auto it = d1.begin(); it != d1.end(); ++it)
		cout << ' ' << *it;
	cout << endl;

	for (auto it = d2.begin(); it != d2.end(); ++it)
		cout << ' ' << *it;
	cout << endl;

	d2 = { 3,4,5 };
	d1.splice(d1.begin(), d2);
	cout << "== List Splice ==" << endl;
	for (auto it = d1.begin(); it != d1.end(); ++it)
		cout << ' ' << *it;
	cout << endl;

	for (auto it = d2.begin(); it != d2.end(); ++it)
		cout << ' ' << *it;
	cout << endl;

	return 0;
}