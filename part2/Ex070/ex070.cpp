#include <iostream>
#include <string>
#include <vector>

using namespace std;

int PointerFunc(vector<string>* info) {
	if (info->empty() == true)
		return 0;
	else
		return sizeof(info);
}

int main() {
	vector<string> msg;
	msg.push_back("��� �屺");
	msg.push_back("ô�ذ�!");
	msg.push_back("��ģ �̸���");
	msg.push_back("... �����ϱ�");

	cout << "������ ���� ũ��: " << PointerFunc(&msg) << endl;
	cout << "���� ���� ũ��: " << sizeof(msg) << endl;

	return 0;
}