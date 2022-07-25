#include <iostream>
#include <vector>

namespace MyArea {
	int Plus(int x, int y) {
		return x + y;
	}
}

using namespace std;
using namespace MyArea;
using MyVector = vector<int>;

int main() {
	MyVector d;
	d.push_back(1);
	d.push_back(2);

	cout << "d: " << d.at(0) << ", " << d.at(1) << endl;
	cout << "Plus: " << Plus(2, 4) << endl;

	return 0;
}