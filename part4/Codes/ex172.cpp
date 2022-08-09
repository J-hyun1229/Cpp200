#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	vector<int> d = { 8,27,35,49 };

	// none_of: ��Ұ� ��� ���ǽĿ� false�� true ����.
	// ��� ��Ұ� 100���� ũ�� ������ true.
	bool no_under100 = none_of(d.begin(), d.end(), [](int i) { return i > 100; });

	// ��� ��Ұ� 0�� �ƴϸ� true.
	bool no_zero = none_of(d.begin(), d.end(), [](int i) {return i == 0; });

	//cout << boolalpha;
	//cout << no_under100 << " " << no_zero << endl;

	if (no_under100 && no_zero)
		cout << "d �ڷ�� ��� 100���� �۰� 0�� �ƴմϴ�." << endl;

	return 0;
}