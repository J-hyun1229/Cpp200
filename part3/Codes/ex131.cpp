#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> data;
	int n = 0;

	try {
		n = data.at(10);
	}
	catch (exception e) {
		cout << e.what() << endl;
	}

	return 0;
}