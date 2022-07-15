#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int data1[10] = { 0, };
	fill_n(data1, 2, 10);
	fill_n(data1 + 4, 3, 20);

	cout << "== data1 result ==" << endl;
	for (int i : data1)
		cout << i << ", ";

	vector<int> data2({ 0,1,2,3,4,5,6,7 });
	fill_n(data2.begin(), data2.size() - 1, 30);
	fill_n(data2.begin(), 4, 40);

	cout << endl << endl << "== data2 result == " << endl;

	for (int i : data2)
		cout << i << ", ";

	return 0;
}