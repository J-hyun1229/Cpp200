#include <iostream>
#include <string>

using namespace std;

class KingInfo {
private:
	string name;
	string son;
	int ascend;

public:
	KingInfo() {}

	void setVal(const string name, const string son, int ascend) {
		this->name = name;
		this->son = son;
		this->ascend = ascend;
	}

	string getNameSon() const {
		return name + "�� �Ƶ� " + son;
	}

	string getNameAscend() const {
		return name + " �������� " + to_string(ascend) + "��";
	}
	
};

int main() {

	KingInfo ki;
	ki.setVal("����", "���ر�", 1567);

	cout << ki.getNameSon() << endl;
	cout << ki.getNameAscend() << endl;

	return 0;

}