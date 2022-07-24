#include <iostream>
#include <string>

using namespace std;

void Type1(string msg, int no, double val) {
	cout << msg << ", ���� ��ȣ " << no << ", ���� �� " << val << endl;
}

void Type2(int no, double val) {
	cout << no << ", ���� �� " << val << endl;
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