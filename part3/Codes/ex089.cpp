#include <iostream>
#include <string>

using namespace std;

struct Princess {
	string name;
	string father;
	string birthday;
} jungso;

void Print(Princess* p) {
	cout << "jungso.name = " << p->name << endl;
	cout << "jungso.father = " << p->father << endl;
	cout << "jungso.birthday = " << p->birthday << endl;
}

int main() {
	jungso.name = "���Ұ���";
	jungso.father = "���� ����";
	jungso.birthday = "1412��";

	Print(&jungso);

	return 0;
}