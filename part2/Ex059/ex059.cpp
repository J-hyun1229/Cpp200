#include <iostream>
#include <string>

using namespace std;

int main() {
	string sentance = "i hate coding";

	sentance.erase(0, 7);

	sentance.insert(0, "I like ");

	cout << sentance << endl;

	return 0;
}