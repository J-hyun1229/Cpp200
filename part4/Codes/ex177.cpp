#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool IsOdd(int i) {
	return (i % 2) == 1;
}

int main() {

	vector<int> d1{ 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	vector<int> d2;

	// 컨테이너 앞쪽은 조건이 true, 뒤쪽은 false인 요소로 나눠짐.
	partition(d1.begin(), d1.end(), IsOdd);

	// 나눠진 위치를 반복자로 받음.
	auto res = partition_point(d1.begin(), d1.end(), IsOdd);

	// d1의 시작부터 나눠진 위치까지 d2에 할당.
	d2.assign(d1.begin(), res);

	for (int x : d2)
		cout << x << ", ";

	return 0;
}