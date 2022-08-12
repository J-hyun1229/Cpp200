#include <fstream>
#include <iostream>
#include "dist/json/json.h"

using namespace std;
using namespace Json;

int main() {
	ofstream json_write;
	json_write.open("json_exam3.json");

	Value root;
	root["Title"] = "Convert Exam";
	root["IsJson"] = true;

	Value nums;
	nums["No1"] = 12;
	nums["No2"] = 20.3;

	root["Array"]["Number"] = nums;

	// root의 내용을 json_write와 연결된 파일(json_exam3.json)로 출력
	json_write << root;
	json_write.close();

	ifstream json_open("json_exam3.json");
	Reader reader;
	Value value;

	reader.parse(json_open, value);

	cout << boolalpha;
	cout << value["Array"]["Number"].get("No1", -1).asInt() << endl;
	cout << value["Array"]["Number"].get("No2", -1).asDouble() << endl;
	cout << value["Array"]["Number"].get("No1", "Empty").asString() << endl;
	cout << value.get("IsJson", false).asBool() << endl;

	return 0;

}