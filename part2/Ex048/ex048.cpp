#include <iostream>

using namespace std;

int main() {
	double x = 1.2345;
	double div = 0.0;
	double mod = 0.0;

	mod = modf(x, &div); // modf: �Ҽ��� �и� �Լ�. div�� �� ����, ������ ����.
	cout << "1.2345�� ��: " << div << ", ������: " << mod << endl;

	int n = 5;
	double d = n;
	double d2 = 7.0;

	cout << n << ", " << d << ", " << d2 << endl;

	return 0;
}