#include <iostream>
#include <string>

using namespace std;

struct Info {
	string conutry;
	struct Who {
		string name;
		string nickname;
	} who;
};

int main() {
	Info chuck = { "���", {"�屺 ô�ذ�", "�ҵ帶����"} }; // country, Who�� ���� �����Ͽ� �ʱ�ȭ

	Info anjang = { "����", "����� �����", "���� ���" }; // �и����� �ʾƵ� ������� ���� ����

	cout << chuck.conutry << ", " << chuck.who.name << ", " << chuck.who.nickname << endl;

	cout << anjang.conutry << ", " << anjang.who.name << ", " << anjang.who.nickname << endl;

	return 0;
}