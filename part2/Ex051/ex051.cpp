#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	time_t now = time(NULL);
	tm* ptm = localtime(&now);

	char buffer[64];
	strftime(buffer, 64, "���� �ð��� %Y�� %m�� %d��, %H�� %M�� %S�� �Դϴ�.(%p)\n", ptm);

	cout << buffer;

	return 0;
}