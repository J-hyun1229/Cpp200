#include <iostream>

using namespace std;

int main() {
	auto d1 = 1;
	decltype(d1) d2 = 2;

	auto d3 = 3.4;
	decltype(d2 + d3) d4 = 3;

	cout << "d1: " << d1 << ", " << typeid(d1).name() << endl;
	cout << "d2: " << d2 << ", " << typeid(d2).name() << endl;
	cout << "d3: " << d3 << ", " << typeid(d3).name() << endl;
	cout << "d4: " << d4 << ", " << typeid(d4).name() << endl;

	return 0;
}