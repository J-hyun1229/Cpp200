#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	const string file_name = "096.txt";

	ofstream file_out;
	file_out.open(file_name, ifstream::out); // file_name 위치로 출력 스트림 file_out 생성 file_name 파일이 없다면 생성.

	file_out << "고구려 유리왕과 황조가" << endl; // file_out 스트림을 통해 출력
	file_out << "사랑의 아픔을 승화한 시" << endl;

	file_out.close();

	ifstream file_in;
	file_in.open(file_name, ifstream::in); // file_name 위치로 입력 스트림 file_in 생성

	string line;

	while (getline(file_in, line)) { // file_in 스트림으로부터 한 줄 단위로 line으로 입력받음
		cout << line << endl; // line의 내용 콘솔에 출력
	}

	file_in.close();

	return 0;
}