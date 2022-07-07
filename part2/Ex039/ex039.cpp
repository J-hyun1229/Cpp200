#include <iostream>

using namespace std;

int main() {
	int n = 0;

	do {
		n++;

		if (n % 3 == 0)
			continue;
		else
			cout << "n°ª: " << n << endl;
	} while (n < 10);
	
	return 0;
}