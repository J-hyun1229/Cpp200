#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {
	array<int, 5> d{ 5,9,4,1,7 };

	auto res1 = minmax_element(d.begin(), d.end());

	cout << "ÃÖ¼Ú°ª: " << *res1.first;
	cout << ", À§Ä¡: " << (res1.first - d.begin()) << '\n';
	cout << "ÃÖ´ñ°ª: " << *res1.second;
	cout << ", À§Ä¡: " << (res1.second - d.begin()) << '\n';

	auto res2 = minmax_element(d.begin(), d.end(), [](int arg1, int arg2) {
		return arg1 < arg2;
		});

	cout << "ÃÖ¼Ú°ª: " << *res2.first;
	cout << ", À§Ä¡: " << (res2.first - d.begin()) << '\n';
	cout << "ÃÖ´ñ°ª: " << *res2.second;
	cout << ", À§Ä¡: " << (res2.second - d.begin()) << '\n';

	return 0;

}