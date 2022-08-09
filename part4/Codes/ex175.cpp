#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {
	array<int, 5> d{ 5,9,4,1,7 };

	auto res1 = minmax_element(d.begin(), d.end());

	cout << "�ּڰ�: " << *res1.first;
	cout << ", ��ġ: " << (res1.first - d.begin()) << '\n';
	cout << "�ִ�: " << *res1.second;
	cout << ", ��ġ: " << (res1.second - d.begin()) << '\n';

	auto res2 = minmax_element(d.begin(), d.end(), [](int arg1, int arg2) {
		return arg1 < arg2;
		});

	cout << "�ּڰ�: " << *res2.first;
	cout << ", ��ġ: " << (res2.first - d.begin()) << '\n';
	cout << "�ִ�: " << *res2.second;
	cout << ", ��ġ: " << (res2.second - d.begin()) << '\n';

	return 0;

}