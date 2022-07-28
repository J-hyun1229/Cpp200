#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> d;

	d.assign(5, 100);
	for (int i = 0; i < d.size(); i++)
		cout << "d " << i << ": " << d.at(i) << endl;

	d.front() = 1;
	d.back() = 2;

	if (d.empty())
		cout << "벡터가 비어 있습니다." << endl;
	else {
		for(int i=0;i<d.size();i++)
			cout << "d " << i << ": " << d.at(i) << endl;
	}

	return 0;
}