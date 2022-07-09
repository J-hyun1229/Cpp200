#include <iostream>
#include <string>
#include <vector>

using namespace std;

int PointerFunc(vector<string>* info) {
	if (info->empty() == true)
		return 0;
	else
		return sizeof(info);
}

int main() {
	vector<string> msg;
	msg.push_back("고려 장군");
	msg.push_back("척준경!");
	msg.push_back("절친 이름은");
	msg.push_back("... 무엇일까");

	cout << "포인터 인자 크기: " << PointerFunc(&msg) << endl;
	cout << "원래 변수 크기: " << sizeof(msg) << endl;

	return 0;
}