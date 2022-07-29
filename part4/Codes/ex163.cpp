#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main() {
	bitset<8> d1(1);
	bitset<8> d2(0x01);

	cout << "d1: " << d1 << endl;
	cout << "d2: " << d2 << endl;

	d1.set(0, false);
	d1.set(2, 1);

	cout << endl << "== d1 ==" << endl;
	cout << "d1: " << d1 << endl;

	d2[4] = false;
	d2.flip(5);

	cout << endl << "== d2 ==" << endl;
	cout << "d2: " << d2 << endl;

	string d1_str = d1.to_string();
	int d2_int = d2.to_ulong();

	cout << endl << "== º¯È¯ ==" << endl;
	cout << "d1: " << d1_str << endl;
	cout << "d2: " << d2_int << endl;

	return 0;
}