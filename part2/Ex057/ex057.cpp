#include <iostream>
#include <string>

using namespace std;

int main() {
	string king = "���� ����";
	string fav1 = "���";
	string fav2 = "�߱�";

	string king_info = "";

	king_info += king;
	king_info += "�� ";
	king_info += fav1;
	king_info.append("�� ");
	king_info.append(fav2);
	king_info.append("�� �����߽��ϴ�.");

	cout << king_info << endl;

	return 0;
}