#include <iostream>
#include <list>

using namespace std;

void Print(const list<int>& data) {
	cout << "== Print ==" << endl;

	for (auto it = data.begin(); it != data.end(); ++it)
		cout << *it << ", ";
	cout << endl;
}

int main() {

	list<int> d1({ 1,2,3,2 });
	d1.push_back(3);
	d1.sort();

	Print(d1);
	d1.unique();

	Print(d1);

	list<int> d2 = { 4,5,6 };
	d2.merge(d1);
	Print(d2);

	return 0;

}