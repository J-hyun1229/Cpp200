#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream ifs("���ѽô� ���� �±�� ����.txt"); // ���� ��� ���� �� ifstream::in���� ����.
	
	stringstream ss;
	ss << ifs.rdbuf(); // ifs�� ����� ������ ��ü �ؽ�Ʈ�� stringstream ss�� ����.
	ifs.close();

	string read = "";

	cout << "== !ss.eof ==" << endl;
	while (!ss.eof()) {
		ss >> read; //ss�� ������ read�� ����. ���� ������ ���ӵ� ���ڿ�.(���� �������� ����)
		cout << read << " ";
	}

	cout << endl << "== !ss.str() ==" << endl;
	read = ss.str(); // ss�� ��� �����͸� ���ڿ��� ��ȯ�Ͽ� read�� ����.
	cout << endl << read << endl;


	return 0;
}