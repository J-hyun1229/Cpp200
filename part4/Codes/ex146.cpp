#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {
	typedef tuple<string, int, double> Data;
	
	Data d1("���ڿ�", 10, 1.2);
	auto d2 = make_tuple("���ڿ�", 10, 1.2);

	Data d3("scution", 5, 3.4); // Data d3("suction", 5) �Ұ�.
	
	cout << get<0>(d1) << ", " << get<1>(d1) << ", " << get<2>(d1) << endl;

	return 0;
}