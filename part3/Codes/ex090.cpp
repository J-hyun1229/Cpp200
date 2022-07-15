#include <iostream>

using namespace std;

struct Data1 {
	Data1(int x) :number(x) {} // 클래스 생성자와 동일한 형태.
	int number;
};

struct Data2 {
	Data2() {
		number = 10;
	}
	int number;
} data2;

int main() {
	Data1 data1(2); // 초기화 코드가 실행됨. 클래스 생성자와 동일한 형태.
	// Data1 d; 기본 생성자가 없어 오류가 발생함.
	cout << "Data1 num: " << data1.number << endl;
	cout << "Data2 num: " << data2.number << endl;
	
	return 0;
}