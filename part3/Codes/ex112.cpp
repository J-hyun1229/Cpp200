#include <iostream>
#include <string>

using namespace std;

class KingInfo {
private:
	string value;
	int number;

public:
	KingInfo() {}

	void setValue(const string value) {
		if (value.empty() == false) {
			this->value = value;
		}
		else
			cout << "�߸��� �����Դϴ�.";
	}

	string getValue() const {
		if (value.empty() == false)
			return value;
		else
			return "������ ���� ���ּ���.";
	}

};

int main() {

	KingInfo ki_1;
	ki_1.setValue("���� ���� �̿�");
	
	KingInfo ki_2;
	ki_2.setValue("���� ���� ��ȣ");
	
	cout << ki_1.getValue() << endl;
	cout << ki_2.getValue() << endl;

	return 0;
}