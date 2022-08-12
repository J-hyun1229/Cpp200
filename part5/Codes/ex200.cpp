#include <fstream>
#include <iostream>
#include "dist/json/json.h"

using namespace std;
using namespace Json;

int main() {
	ifstream json_open("json_exam3.json");
	Reader reader;
	Value value;
	// json_open�� ����� ������ �о� value�� ����. �б� ���� �� value�� null�� ����.
	reader.parse(json_open, value);

	cout << "Root ũ��: " << value.size() << endl;
	cout << "Array ũ��: " << value["Array"].size() << endl;
	cout << "Number ũ��: " << value["Array"]["Number"].size() << endl;

	return 0;

}