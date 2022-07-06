#include <iostream>
#include <string>

using namespace std;

int main() {
	string publisher = "정보문화사";
	string language = "C++";

	int x = 10;
	int y = 10;

	if (publisher != language)
		cout << "두 문장은 같지 않습니다." << endl;
	else
		cout << "두 문장은 같습니다." << endl;

	if (x >= y)
		cout << "x>=y" << endl;
	else
		cout << "x<y" << endl;

	if (x <= 20)
		cout << "x<=20" << endl;
	else
		cout << "x>20" << endl;

	return 0;
}