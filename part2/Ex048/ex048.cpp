#include <iostream>

using namespace std;

int main() {
	double x = 1.2345;
	double div = 0.0;
	double mod = 0.0;

	mod = modf(x, &div); // modf: 소수점 분리 함수. div에 몫 저장, 나머지 리턴.
	cout << "1.2345의 몫: " << div << ", 나머지: " << mod << endl;

	int n = 5;
	double d = n;
	double d2 = 7.0;

	cout << n << ", " << d << ", " << d2 << endl;

	return 0;
}