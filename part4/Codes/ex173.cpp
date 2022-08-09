#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

int main() {
	list<int> d1 = { 5,3,1,7,9 };
	list<string> d2 = { "ef","ab","cd","ij","gh" };

	cout << boolalpha;

	// is_sorted(): 오름차순 기준
	cout << "d1 sort: " << is_sorted(d1.begin(), d1.end()) << endl;
	cout << "d2 sort: " << is_sorted(d2.begin(), d2.end()) << endl;

	// sort(): 오름차순 기준
	d1.sort();
	d2.sort();

	cout << "d1 sort: " << is_sorted(d1.begin(), d1.end()) << endl;
	cout << "d2 sort: " << is_sorted(d2.begin(), d2.end()) << endl;

	cout << "== d1 ==" << endl;
	for (auto i : d1)
		cout << i << ", ";

	cout << endl << "== d2 ==" << endl;
	for (auto i : d2)
		cout << i << ", ";

	return 0;
}