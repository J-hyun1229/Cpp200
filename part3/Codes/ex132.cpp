#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> data;
	// data.push_back(1);

	try {
		if (data.empty())
			throw "���Ͱ� ����ֽ��ϴ�.";

		if (data.size() < 2)
			throw 99; // int�� ���� throw
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