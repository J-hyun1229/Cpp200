#include <iostream>

using namespace std;

void Func1(bool* is_on) {
	cout << "call by Address: " << sizeof(is_on) << endl; // 포인터의 크기 출력
}

void Func2(bool& is_on) {
	cout << "call by Reference: " << sizeof(is_on) << endl; // 참조변수의 크기 출력
}

int main() {
	bool is_tmp = true;

	Func1(&is_tmp);
	Func2(is_tmp);

	return 0;
}