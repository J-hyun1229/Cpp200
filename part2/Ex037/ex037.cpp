#include <iostream>

using namespace std;

int main() {
	int n = 3;

	switch (n)
	{
	case 1:
		cout << "n == 1" << endl;
		break;

	case 2:
		cout << "n == 2" << endl;
		break;

	case 3:
		cout << "n == 3" << endl;
		break;

	case 4:
		cout << "n == 4" << endl;
		break;

	default:
		cout << "n값을 알 수 없습니다." << endl;
		break;
	}

	return 0;
}