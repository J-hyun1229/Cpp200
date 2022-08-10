#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main() {
	regex re1(R"(\d+)"); // ���� ǥ����. ������ R"()", () �ȿ� ��Ģ �ۼ�.
	string str1("1234");

	bool is_match = regex_match(str1, re1); // str�� re1 ��Ģ�� �����ϸ� true.

	cout << boolalpha;
	cout << "is_match = " << is_match << endl;

	regex re2(R"(\d+)");
	string str2 = "ab cd ef";

	smatch match_info;
	regex_search(str2, match_info, re2);

	// �´� ���ڿ��� ������ �� ���ڿ� ���.
	cout << "number: " << match_info.str() << endl;

	return 0;
}