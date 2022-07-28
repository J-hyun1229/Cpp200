#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {
	tuple<int, double> d1(1, 2.1);
	tuple<double, string> d2(3.4, "suction1");

	auto d3 = tuple_cat(d1, d2);
	
	cout << get<0>(d3) << ", " << get<1>(d3) << ", " << get<2>(d3) << ", " << get<3>(d3) << endl;

	return 0;
}