#include <iostream>
#include <list>

using namespace std;

void Print(const list<int>& data) {
	cout << "== Print ==" << endl;

	for (auto it = data.begin(); it != data.end(); ++it)
		cout << *it << ", ";
	cout << endl;
}

bool isOdd(int arg) {
	return arg % 2 == 0 ? 0 : 1; // false : true
}

int main() {
	list<int> d1({ 1,2,4,2,7,10,13,14 });
	d1.remove(2);
	d1.remove_if(isOdd);
	Print(d1);

	d1.reverse();

	Print(d1);

	return 0;
}