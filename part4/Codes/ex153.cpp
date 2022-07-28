#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> d1({ 1,2,3 });
	vector<int> d2 = { 10,20,40 };

	d1.swap(d2);
	d1.insert(d1.begin() + 1, 20);

	cout << "== d1 ==" << endl;
	for (int i = 0; i < d1.size(); i++)
		cout << "d1 (" << i << ") : " << d1.at(i) << endl;

	cout << endl << "== d2 ==" << endl;
	for (int i = 0; i < d2.size(); i++)
		cout << "d2 (" << i << ") : " << d2.at(i) << endl;

	d2.erase(d2.begin(), d2.begin() + 2);

	d2.push_back(100);
	d2.push_back(200);
	d2.push_back(300);
	d2.pop_back();

	d2.insert(d2.end(), d1.begin(), d1.end());
	cout << endl << "== d2 ==" << endl;
	for (int i = 0; i < d2.size(); i++)
		cout << "d2 (" << i << ") : " << d2.at(i) << endl;

	return 0;
}