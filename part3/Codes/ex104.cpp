#include <iostream>
#include <string>

using namespace std;

class KingInfo {
public:
	void setName(string name) {
		name_ = name;
	}

	string getName() {
		return name_;
	}

private:
	string name_;
};

int main() {
	KingInfo ki;
	ki.setName("조선 세조 이유");

	cout << ki.getName() << endl;

	return 0;
}