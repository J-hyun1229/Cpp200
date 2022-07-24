#include <iostream>
#include <string>

using namespace std;

void Type1(string msg, int no, double val) {
	cout << msg << ", 에러 번호 " << no << ", 오류 값 " << val << endl;
}

void Type2(int no, double val) {
	cout << no << ", 오류 값 " << val << endl;
}

template<typename... T>
void PrintLog(T... arg0) {
	Type1(arg0...);
	// Type2(arg0...);
}

int main() {
	PrintLog<string, int, double>("Warning", 100, 22.5);

	return 0;
}