#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> data;
	// data.push_back(1);

	try {
		if (data.empty())
			throw "벡터가 비어있습니다.";

		if (data.size() < 2)
			throw 99; // int형 예외 throw
	}
	catch (const char* e) {
		//string tmp = e;
		cout << "catch (char* e) " << e << endl;
	}
	catch (int e) {
		cout << "catch (int e) " << e << endl;
	}

	return 0;
}