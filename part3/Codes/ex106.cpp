#include <iostream>
#include <string>

using namespace std;

class KingInfo {
public:
	KingInfo() {
		value = "���� ���� ����";
	}

	KingInfo(const string value) {
		this->value = value;
	}

	KingInfo(const int value) {
		this->value = "���걺 ��������: ";
		this->value += to_string(value);
	}

	string getVal() const {
		return value;
	}

private:
	string value;

};

int main() {
	KingInfo king_info1;
	KingInfo king_info2("���� ���걺 ����");
	KingInfo king_info3(1494);

	cout << king_info1.getVal() << endl;
	cout << king_info2.getVal() << endl;
	cout << king_info3.getVal() << endl;

	return 0;
}
