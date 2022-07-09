#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	auto res1 = min(1, 5);
	auto res2 = max('a', 'z');

	cout << res1 << ", " << res2 << endl;
	auto res3 = minmax({ 'a', 'n', 'z' });
	auto res4 = minmax({ 1,2,3 });

	cout << res3.first << ", " << res3.second << endl;
	cout << res4.first << ", " << res4.second << endl;

	return 0;
}