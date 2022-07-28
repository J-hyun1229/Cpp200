#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {
	tuple<int> d1(1);
	tuple<int, double> d2(1, 2.3);
	tuple<int, double, char> d3(1, 2.3, 'a');
	
	cout << sizeof(d1) << ", " << sizeof(d2) << ", " << sizeof(d3) << endl;

	return 0;
}