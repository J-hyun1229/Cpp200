#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
	regex re1(R"(l|i|k|e)");
	regex re2(R"(\D)"); // 숫자를 제외한 문자
	regex re3(R"(\s)"); // 공백
	string str = "i like coding";

	string res1 = regex_replace(str, re1, "[$&]");
	string res2 = regex_replace(str, re1, "*");
	string res3 = regex_replace(str, re2, "_$&_");
	string res4 = regex_replace(str, re3, "(space)");

	cout << "res1: " << res1 << endl;
	cout << "res2: " << res2 << endl;
	cout << "res1: " << res3 << endl;
	cout << "res2: " << res4 << endl;

	return 0;
}