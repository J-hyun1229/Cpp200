#include <iostream>

using namespace std;

int main() {

	double n1 = 1;
	double n2 = 0.4;
	double n3 = 0.0; // 0도 마찬가지
	double n4 = 11.2;

	// isnormal() -> 0이면 false 리턴. 즉 실수가 유효값인지 검사.
	cout << boolalpha;
	cout << isnormal(n1) << endl;
	cout << isnormal(n2) << endl;
	cout << isnormal(n3) << endl;
	cout << isnormal(n4) << endl;

	return 0;
}