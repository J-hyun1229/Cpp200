#include <iostream>
#include <string>

using namespace std;

int main() {
	string publisher = "������ȭ��";
	string language = "C++";

	int x = 10;
	int y = 10;

	if (publisher != language)
		cout << "�� ������ ���� �ʽ��ϴ�." << endl;
	else
		cout << "�� ������ �����ϴ�." << endl;

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