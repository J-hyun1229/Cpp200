#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = filesystem;

int main() {
	int size = fs::file_size("096_copy.txt");

	cout << "���� ũ��: " << size << " byte" << endl;

	return 0;
}