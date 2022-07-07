#include <iostream>

using namespace std;

int main() {
	int n1 = 100;
	int n2 = 6;

	if (n1 < n2)
		cout << "n1 < n2" << endl;
	else if (n1 > n2)
		cout << "n1 > n2" << endl;
	else
		cout << "n1 == n2" << endl;

	if (n2 < 7) {
		if (n2 > 3) {
			if (n2 == 4)
				cout << "n2 == 4" << endl;
			else if (n2 == 5)
				cout << "n2 == 5" << endl;
			else
				cout << "n2 == 6" << endl;
		}
		else {
			if (n2 == 3)
				cout << "n2 == 3" << endl;
			else if (n2 == 2)
				cout << "n2 == 2" << endl;
			else
				cout << "n1 <= 1" << endl;
		}
	}

	return 0;
}