#include <fstream>
#include <iostream>
#include "dist/json/json.h"

using namespace std;
using namespace Json;

int main() {
	ofstream json_write;
	json_write.open("json_exam2.json");

	Value root;
	root["Title"] = "Array Exam";

	Value arr1;
	arr1.append("C#");
	arr1.append("C++");

	Value arr2;
	arr2.append("Q#");
	arr2.append("Qt");

	root["Language"]["Sample1"] = arr1;
	root["Language"]["Sample2"] = arr2;

	json_write << root;
	json_write.close();

	ifstream json_open("json_exam2.json");
	Reader reader;
	Value value;
	reader.parse(json_open, value);
	cout << value << endl << endl;

	for (auto i : value["Language"]["Sample1"])
		cout << "Language Sample1: " << i << endl;

	return 0;
}