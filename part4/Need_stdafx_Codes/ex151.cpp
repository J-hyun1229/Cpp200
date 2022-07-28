#include "pch.h"
#include <iostream>
#include <tuple>

using namespace std;

struct TupleExam {
	TupleExam(tuple<int, string>) {
		cout << "Tuple 인자로 전달" << endl;
	}

	TupleExam(int n, string s) {
		cout << "piecewis_construct로 인자 전달" << endl;
	}
};

int main() {

	tuple<int, string> d(1, "str");

	pair<TupleExam, TupleExam> d1(d, d);
	pair<TupleExam, TupleExam> d2(piecewise_construct, d, d);
	pair<TupleExam, TupleExam> d3(make_tuple(2, "str"), make_tuple(2, "str"));
	pair<TupleExam, TupleExam> d4(piecewise_construct, make_tuple(2, "str"), make_tuple(2, "str"));

	return 0;

}