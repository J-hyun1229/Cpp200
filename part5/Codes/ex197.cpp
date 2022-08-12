#include <fstream>
#include <iostream>
#include "dist/json/json.h"

using namespace std;
using namespace Json;

int main() {
	ifstream json_dir("json_exam.json");
	Reader reader; // Json::Reader�� �̿��Ͽ� json ������ �д´�.
	Value value;

	bool is_parse = reader.parse(json_dir, value);

	if (is_parse == true) {
		cout << "Job1: " << value["Job1"] << endl;
		cout << "SubItems Sub1: " << value["SunItems"]["Sub1"] << endl;
	}
	else
		cout << "Json ������ ���� �� �����ϴ�." << endl;

	return 0;
}