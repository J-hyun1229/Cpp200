#include <iostream>
#include <sstream>

using namespace std;

int main() {
	stringstream ss;

	double n1 = 0.0;

	ss << "1.2,2.6-3.8!4.7=8.9";

	cout << "== string to double ==" << endl;
	while (!ss.eof()) {
		ss >> n1;
		ss.ignore();
		
		cout << n1 << ", ";
	}

	ss.clear(); // 스트림 상태 초기화
	ss.str(""); // 스트림 데이터 초기화
	ss << "1," << "2" << 3 << " " << 4;

	int n2 = 0;
	cout << endl << "== string to int ==" << endl;
	while (!ss.eof()) {
		ss >> n2;
		ss.ignore(); // ss는 첫 데이터를 읽고 처음으로 돌아간다. 이것을 막기 위한 코드.

		cout << n2 << ", ";
	}

	return 0;
}