#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> d = { 8,27,35,49 };

	// none_of: 요소가 모두 조건식에 false면 true 리턴.
	// 모든 요소가 100보다 크지 않으면 true.
	bool no_under100 = none_of(d.begin(), d.end(), [](int i) { return i > 100; });

	// 모든 요소가 0이 아니면 true.
	bool no_zero = none_of(d.begin(), d.end(), [](int i) {return i == 0; });

	//cout << boolalpha;
	//cout << no_under100 << " " << no_zero << endl;

	if (no_under100 && no_zero)
		cout << "d 자료는 모두 100보다 작고 0이 아닙니다." << endl;

	return 0;
}