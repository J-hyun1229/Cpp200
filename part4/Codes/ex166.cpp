#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int num = 4;

	vector<int> data{ 4,1,3,5,2,3,1,7 };

	// find_if ==> 컨테이너의 탐색 범위와 람다식을 전달받아 조건에 맞는 첫 번째 원소를 리턴.
	vector<int>::iterator res1 = find_if(data.begin(), data.end(), [num](int i) {
		return i > num;
		});

	cout << "4보다 큰 첫 번쨰 정수: " << *res1 << endl;

	// count_if ==> 컨테이너에서 조건에 맞는 원소의 개수를 세어 리턴.
	auto res2 = count_if(data.begin(), data.end(), [num](int i) {
		return i > num;
		});

	cout << "4보다 큰 정수의 개수: " << res2 << endl;

	return 0;

}