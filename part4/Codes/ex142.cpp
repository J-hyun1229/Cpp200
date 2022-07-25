#include <iostream>
#include <string>

using namespace std;

int GetInt() { return 1; }
double GetDouble() { return 3.14; }
string GetString() { return "suction"; }

auto add(int x, int y) ->int {
	return x + y;
}

int main() {
	auto d1 = GetInt();
	auto d2 = GetDouble();
	auto d3 = GetString();
	auto d4 = add(5.1, 10.2);

	cout << "d1: " << d1 << ", " << typeid(d1).name() << endl;
	cout << "d2: " << d2 << ", " << typeid(d2).name() << endl;
	cout << "d3: " << d3 << ", " << typeid(d3).name() << endl;
	cout << "d4: " << d4 << ", " << typeid(d4).name() << endl;

	return 0;
}