#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {
	typedef tuple<string, int, double> Data;

	Data d1("suction", 10, 1.2);

	string str = "";
	int n = 0;

	tie(str, n, ignore) = d1;
	cout << str << ", " << n << endl;

	return 0;
}