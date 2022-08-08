#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int num = 4;

	vector<int> data{ 4,1,3,5,2,3,1,7 };

	// find_if ==> �����̳��� Ž�� ������ ���ٽ��� ���޹޾� ���ǿ� �´� ù ��° ���Ҹ� ����.
	vector<int>::iterator res1 = find_if(data.begin(), data.end(), [num](int i) {
		return i > num;
		});

	cout << "4���� ū ù ���� ����: " << *res1 << endl;

	// count_if ==> �����̳ʿ��� ���ǿ� �´� ������ ������ ���� ����.
	auto res2 = count_if(data.begin(), data.end(), [num](int i) {
		return i > num;
		});

	cout << "4���� ū ������ ����: " << res2 << endl;

	return 0;

}