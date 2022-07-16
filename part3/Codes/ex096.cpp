#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	const string file_name = "096.txt";

	ofstream file_out;
	file_out.open(file_name, ifstream::out); // file_name ��ġ�� ��� ��Ʈ�� file_out ���� file_name ������ ���ٸ� ����.

	file_out << "���� �����հ� Ȳ����" << endl; // file_out ��Ʈ���� ���� ���
	file_out << "����� ������ ��ȭ�� ��" << endl;

	file_out.close();

	ifstream file_in;
	file_in.open(file_name, ifstream::in); // file_name ��ġ�� �Է� ��Ʈ�� file_in ����

	string line;

	while (getline(file_in, line)) { // file_in ��Ʈ�����κ��� �� �� ������ line���� �Է¹���
		cout << line << endl; // line�� ���� �ֿܼ� ���
	}

	file_in.close();

	return 0;
}