#include <iostream>
#include <string>

using namespace std;

int main() {
	string sen = "i like coding";

	sen.erase(remove(sen.begin(), sen.end(), ' '), sen.end());

	cout << sen << endl;

	return 0;
}