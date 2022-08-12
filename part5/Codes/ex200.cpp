#include <fstream>
#include <iostream>
#include "dist/json/json.h"

using namespace std;
using namespace Json;

int main() {
	ifstream json_open("json_exam3.json");
	Reader reader;
	Value value;
	// json_open과 연결된 파일을 읽어 value에 저장. 읽기 실패 시 value는 null을 가짐.
	reader.parse(json_open, value);

	cout << "Root 크기: " << value.size() << endl;
	cout << "Array 크기: " << value["Array"].size() << endl;
	cout << "Number 크기: " << value["Array"]["Number"].size() << endl;

	return 0;

}