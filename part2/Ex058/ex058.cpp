#include <iostream>
#include <string>

using namespace std;

int main() {

	string sentance = "i coding";
	sentance.insert(2, "hate ");
	cout << sentance << endl;

	sentance.insert(7, "or like ");
	cout << sentance << endl;

	return 0;
}