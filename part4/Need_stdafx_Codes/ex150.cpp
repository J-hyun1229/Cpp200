#include "pch.h"
#include <iostream>
#include <tuple>
#include <string>

using namespace std;

int main() {
	tuple<int, string> d1(1, "def");
	tuple<int, string> d2(1, "abc");

	if (d1 > d2)
		cout << "d1 > d2" << endl;
	else
		cout << "d1 < d2" << endl;

	tuple<double, string> d3(1.0, "def");
	tuple<double, string, int> d4(2.0, "abc", 3);

	/*
	if (d3 > d4)
		cout << "d3 > d4" << endl;
	else
		cout << "d3 <= d4" << endl;
	*/
	return 0;

}