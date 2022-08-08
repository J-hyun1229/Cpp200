#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<int> d1 = { 1,3,5,7 };

	vector<string> d2 = { "ab", "cd", "ef" };

	if (all_of(d1.begin(), d1.end(), [](int i) { return i % 2; }))
		cout << "d1: ��� Ȧ���Դϴ�." << endl;

	if (all_of(d1.begin(), d1.end(), [](int i) { return i < 10; }))
		cout << "d1: ��� 10���� �۽��ϴ�." << endl;

	if (all_of(d2.begin(), d2.end(), [](string s) { return s.length() < 4 ? true : false; }))
		cout << "d2: ��� ���̰� 4 �����Դϴ�." << endl;

	if (all_of(d2.begin(), d2.end(), [](string s) { return s.find('A'); }))
		cout << "d2: ��� ���� A�� �������� �ʽ��ϴ�." << endl;

	return 0;
}