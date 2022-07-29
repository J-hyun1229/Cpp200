#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {
	bitset<8> d1(100);
	bitset<8> d2(0x78);
	bitset<8> d3(string("11110000"));

	cout << boolalpha;

	cout << "d1: " << d1 << endl;
	cout << "d2: " << d2 << endl;
	cout << "d3: " << d3 << endl;

	d1.set();

	cout << endl << "== d1 ==" << endl;
	cout << "d1 all: " << d1.all() << endl;
	cout << "d1 any: " << d1.any() << endl;
	cout << "d1 none: " << d1.none() << endl;

	d2.reset();

	cout << endl << "== d2 ==" << endl;
	cout << "d2 all: " << d2.all() << endl;
	cout << "d2 any: " << d2.any() << endl;
	cout << "d2 none: " << d2.none() << endl;

	return 0;
}