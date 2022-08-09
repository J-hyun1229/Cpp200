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

	// �����̳� ������ ������ true, ������ false�� ��ҷ� ������.
	partition(d1.begin(), d1.end(), IsOdd);

	// ������ ��ġ�� �ݺ��ڷ� ����.
	auto res = partition_point(d1.begin(), d1.end(), IsOdd);

	// d1�� ���ۺ��� ������ ��ġ���� d2�� �Ҵ�.
	d2.assign(d1.begin(), res);

	for (int x : d2)
		cout << x << ", ";

	return 0;
}