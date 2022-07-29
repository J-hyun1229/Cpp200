#include <iostream>
#include <bitset>

using namespace std;

int main() {
	bitset<4> d1(6);
	bitset<4> d2(0x09);

	auto res = d1 | d2;
	cout << "d1 | d2 = " << res << endl;

	res = d1 & d2;
	cout << "d1 & d2 = " << res << endl;

	res = d1 ^ d2;
	cout << "d1 & d2 = " << res << endl;

	res = d1 << 1;
	cout << "d1 << 1 = " << res << endl;

	res = d1 >> 1;
	cout << "d1 >> 1 = " << res << endl;

	res = ~d1;
	cout << "~d1 = " << res << endl;

	return 0;
}