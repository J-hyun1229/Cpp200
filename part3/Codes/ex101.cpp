#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = filesystem;

int main() {

	fs::copy("096.txt", "096_copy.txt");
	fs::remove("096.txt");

	return 0;
}