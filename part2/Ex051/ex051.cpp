#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>

using namespace std;

int main() {
	time_t now = time(NULL);
	tm* ptm = localtime(&now);

	char buffer[64];
	strftime(buffer, 64, "지금 시각은 %Y년 %m월 %d일, %H시 %M분 %S초 입니다.(%p)\n", ptm);

	cout << buffer;

	return 0;
}