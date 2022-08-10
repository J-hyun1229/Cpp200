#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
	regex re1(R"(\S)"); // 공백을 제외한 모든 문자열.
	regex re2(R"(\t)");
	string str = "i like	coding";

	string res1 = regex_replace(str, re1, "[$&]", regex_constants::format_first_only);

	string res2 = regex_replace(str, re2, "(Tab)", regex_constants::format_first_only);

	cout << "res1: " << res1 << endl;
	cout << "res2: " << res2 << endl;

	return 0;
}