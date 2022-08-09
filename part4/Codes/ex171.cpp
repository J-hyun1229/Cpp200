#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool EvenOdd(int arg) {
	return (arg % 2 == 0);
}

int main() {
	vector<int> d = { 8,27,35,49 };

	if (any_of(d.begin(), d.end(), EvenOdd))
		cout << "d: ¦���� �����մϴ�." << endl;

	if (any_of(d.begin(), d.end(), [](int i) { return i < 10; }))
		cout << "d: 10���� ���� ���� �ֽ��ϴ�." << endl;

	return 0;

}