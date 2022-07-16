#include <iostream>
#include <filesystem>
#include <string>

using namespace std;

namespace fs = filesystem; // namespace fs = std::filesystem;

int main() {
	string dir = "c:\\Program FIles";

	for (auto& name : fs::directory_iterator(dir))
		cout << name << endl;

	return 0;
}
