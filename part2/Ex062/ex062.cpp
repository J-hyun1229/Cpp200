#include <iostream>
#include <string>

using namespace std;

int main() {
	string sen = "i like coding";
	string find_str = "coding";
	string replace_str = "history";

	sen.replace(sen.find(find_str), find_str.length(), replace_str);

	cout << sen << endl;

	return 0;
}