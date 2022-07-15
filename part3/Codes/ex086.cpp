#include <iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
	int data1[10] = { 0, };
	fill(data1, data1 + 3, 10); // data1(배열 시작)부터 data1+3(세번째 요소)까지의 값을 10으로 설정.
	fill(data1 + 4, data1 + 8, 20); // 인덱스 4부터 7까지
	
	cout << "== data1 결과 ==" << endl;

	for (int i : data1)
		cout << i << ", ";

	vector<int> data2({ 0,1,2,3,4,5,6,7 });
	fill(data2.begin(), data2.begin() + 3, 30); // fill함수는 컨테이너도 인자로 받는다.

	cout << endl << endl << "== data2 결과==" << endl;

	for (int i : data2)
		cout << i << ", ";

	return 0;

}