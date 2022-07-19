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
		return name + "의 아들 " + son;
	}

	string getNameAscend() const {
		return name + " 즉위연도 " + to_string(ascend) + "년";
	}
	
};

int main() {

	KingInfo ki;
	ki.setVal("선조", "광해군", 1567);

	cout << ki.getNameSon() << endl;
	cout << ki.getNameAscend() << endl;

	return 0;

}