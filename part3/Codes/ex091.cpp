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
	Data1 d1 = {}; // 내부 변수를 모두 초기화
	cout << data2.number << endl; // data2.number의 초기값 0 출력
	Data2 data2{ d1, 10 }; // 내부 변수를 순서대로 인자에 전달하여 초기화

	cout << "Data1 num: " << data2.data1.number << endl;
	cout << "Data2 num: " << data2.number << endl;

	return 0;
}