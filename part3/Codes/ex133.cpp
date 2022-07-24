#include <iostream>
#include <vector>
#include <string>

using namespace std;

class InputEror :public runtime_error {
public:
	InputEror(int idx, string msg):runtime_error("suction") {
		cout << idx << "번 인덱스에 잘못된 입력값: " << msg << endl;
	}
};

int main() {
	vector<int> data;
	data.push_back(1);

	int idx = 10;
	int val = 20;

	try {
		if (idx >= data.size())
			throw InputEror(idx, to_string(val));

		data.at(idx) = 99;
	}
	catch (InputEror e) {
		cout << e.what();
	}

	return 0;
}