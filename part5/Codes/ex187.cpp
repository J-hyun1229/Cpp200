#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
	regex re1(R"(\d+)"); // 정규 표현식. 형식은 R"()", () 안에 규칙 작성.
	string str1("1234");

	bool is_match = regex_match(str1, re1); // str이 re1 규칙에 부합하면 true.

	cout << boolalpha;
	cout << "is_match = " << is_match << endl;

	regex re2(R"(\d+)");
	string str2 = "ab cd ef";

	smatch match_info;
	regex_search(str2, match_info, re2);

	// 맞는 문자열이 없으면 빈 문자열 출력.
	cout << "number: " << match_info.str() << endl;

	return 0;
}