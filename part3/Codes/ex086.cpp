#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
	int data1[10] = { 0, };
	fill(data1, data1 + 3, 10); // data1(�迭 ����)���� data1+3(����° ���)������ ���� 10���� ����.
	fill(data1 + 4, data1 + 8, 20); // �ε��� 4���� 7����
	
	cout << "== data1 ��� ==" << endl;

	for (int i : data1)
		cout << i << ", ";

	vector<int> data2({ 0,1,2,3,4,5,6,7 });
	fill(data2.begin(), data2.begin() + 3, 30); // fill�Լ��� �����̳ʵ� ���ڷ� �޴´�.

	cout << endl << endl << "== data2 ���==" << endl;

	for (int i : data2)
		cout << i << ", ";

	return 0;

}