#include <iostream>
#include <string>

using namespace std;

class KingInfo {
public:
	KingInfo() {
		this->name = "조선 예종 이황";
	}

	string getName() {
		return name;
	}
	
private:
	string name;
};

int main() {
	KingInfo ki;
	cout << ki.getName() << endl;

	return 0;
}