#include <iostream>

using namespace std;

struct Data1 {
	int number;
};

struct Data2 {
	Data1 data1;
	int number;
} data2;

int main() {
	Data1 d1 = {}; // ���� ������ ��� �ʱ�ȭ
	cout << data2.number << endl; // data2.number�� �ʱⰪ 0 ���
	Data2 data2{ d1, 10 }; // ���� ������ ������� ���ڿ� �����Ͽ� �ʱ�ȭ

	cout << "Data1 num: " << data2.data1.number << endl;
	cout << "Data2 num: " << data2.number << endl;

	return 0;
}