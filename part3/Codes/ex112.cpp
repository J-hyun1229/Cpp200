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
			cout << "잘못된 인자입니다.";
	}

	string getValue() const {
		if (value.empty() == false)
			return value;
		else
			return "설정을 먼저 해주세요.";
	}

};

int main() {

	KingInfo ki_1;
	ki_1.setValue("조선 중종 이역");
	
	KingInfo ki_2;
	ki_2.setValue("조선 인종 이호");
	
	cout << ki_1.getValue() << endl;
	cout << ki_2.getValue() << endl;

	return 0;
}