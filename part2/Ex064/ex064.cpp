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

	ss.clear(); // ��Ʈ�� ���� �ʱ�ȭ
	ss.str(""); // ��Ʈ�� ������ �ʱ�ȭ
	ss << "1," << "2" << 3 << " " << 4;

	int n2 = 0;
	cout << endl << "== string to int ==" << endl;
	while (!ss.eof()) {
		ss >> n2;
		ss.ignore(); // ss�� ù �����͸� �а� ó������ ���ư���. �̰��� ���� ���� �ڵ�.

		cout << n2 << ", ";
	}

	return 0;
}