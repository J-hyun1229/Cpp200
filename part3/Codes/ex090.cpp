#include <iostream>

using namespace std;

struct Data1 {
	Data1(int x) :number(x) {} // Ŭ���� �����ڿ� ������ ����.
	int number;
};

struct Data2 {
	Data2() {
		number = 10;
	}
	int number;
} data2;

int main() {
	Data1 data1(2); // �ʱ�ȭ �ڵ尡 �����. Ŭ���� �����ڿ� ������ ����.
	// Data1 d; �⺻ �����ڰ� ���� ������ �߻���.
	cout << "Data1 num: " << data1.number << endl;
	cout << "Data2 num: " << data2.number << endl;
	
	return 0;
}