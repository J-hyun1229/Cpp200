#include <iostream>

using namespace std;

void Func(int arg) {
	cout << "변경 전: " << arg << endl;
	arg += 10;
	cout << "변경 후: " << arg << endl;
}

int main() {
	int y = 10;

	Func(y);

	cout << "함수 종료 후: " << y << endl;

	return 0;
}