#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

int main() {
	
	if (fs::exists("c://Dev/Cpp200") == true) {
		cout << "������ �����մϴ�." << endl;
	}
	else
		cout << "������ �����ϴ�." << endl;

	return 0;
}