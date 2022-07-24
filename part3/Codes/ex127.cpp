#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <class T>
class TemplateData {
private:
	vector<T> data;

public:
	void Add(T arg) {
		data.push_back(arg);
	}

	void Print() {
		for (int i = 0; i < data.size(); i++)
			cout << "data: " << data.at(i) << endl;
	}

};

int main() {

	TemplateData<int> int_d;
	int_d.Add(1);
	int_d.Add(2);
	int_d.Print();

	TemplateData<string> int_s;
	int_s.Add("Hello");
	int_s.Add("World");
	int_s.Add("!");
	int_s.Print();

	return 0;

}