#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<int> d{ 5,9,7,4,3,8,6 };

	// 첫번째 인자와 두번째 인자 사이의 거리를 구한다.
	cout << "distance1: " << distance(d.begin(), d.end()) << endl;

	vector<int>::iterator end_it = d.end() - 1;

	cout << "distance2: " << distance(d.begin(), end_it) << endl;

	vector<int>::iterator max_it = max_element(d.begin(), d.end());
	auto min_it = min_element(d.begin(), d.end());

	cout << "distance4: " << distance(d.begin(), min_it) << endl;

	cout << "distance5: " << distance(max_it, min_it);

	return 0;
}