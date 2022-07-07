#include <iostream>
#include <bitset>

using namespace std;

typedef bitset<8> bit_t;

int main() {
	bitset<8> bit1;

	bit1.reset(); // 0000 0000
	bit1 = 127; // 0111 1111

	bitset<8> bit2;
	bit2.reset();
	bit2 = 0x20; // 32
	
	bit_t bit3 = bit1 & bit2;
	bit_t bit4 = bit1 | bit2;
	bit_t bit5 = bit1 ^ bit2;
	bit_t bit6 = ~bit1;
	bit_t bit7 = bit2 << 1;
	bit_t bit8 = bit2 >> 1;


	cout << "bit1 & bit2 = " << bit3 << ", " << bit3.to_ulong() << endl;
	cout << "bit1 | bit2 = " << bit4 << ", " << bit4.to_ulong() << endl;
	cout << "bit1 ^ bit2 = " << bit5 << ", " << bit5.to_ulong() << endl;
	cout << "~bit1 = " << bit6 << ", " << bit6.to_ulong() << endl;
	cout << "bit2 << 1 = " << bit7 << ", " << bit7.to_ulong() << endl;
	cout << "bit2 >> 1 = " << bit8 << ", " << bit8.to_ulong() << endl;


	return 0;
	
}