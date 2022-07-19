#include <iostream>
#include <vector>

using namespace std;

class TmpClass {
private:
	string name;
public:
	TmpClass(string name) {
		this->name = name;
		cout << name << "생성자 호출" << endl;
	}

	~TmpClass() {
		cout << name << "소멸자 호출" << endl;
	}

};

int main() {
	TmpClass* tc = new TmpClass("tc1");
	
	TmpClass tc2("tc2");
	TmpClass tc3("tc3");

	delete tc;
	tc = nullptr;

	return 0;
}