#include <iostream>
#include <fstream>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

int main() {

	fs::create_directory("temp");
	fs::create_directory("c:\\Dev\\suction");
	fs::copy("temp", "temp_copy");
	fs::remove("temp");
	fs::remove("temp_copy");

	return 0;
}