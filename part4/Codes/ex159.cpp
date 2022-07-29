#include <iostream>
#include <array>

using namespace std;

void Print(const array<int, 3>& data) {
	cout << "== Print ==" << endl;

	for (auto it = data.begin(); it != data.end(); ++it) {
		cout << *it << ", ";
	}
	cout << endl;
}

int main() {

	array<int, 3> d1{ 10,2,5 };
	array<int, 3> d2;
	d2.fill(0);
	d2.at(1) = 200;

	Print(d2);

	copy(d1.begin(), d1.end(), d2.begin());
	Print(d1);
	Print(d2);

	return 0;

}