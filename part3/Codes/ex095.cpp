#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream ifs("삼한시대 마한 태기왕 전설.txt"); // 파일 모드 생략 시 ifstream::in으로 설정.
	
	stringstream ss;
	ss << ifs.rdbuf(); // ifs에 연결된 파일의 전체 텍스트를 stringstream ss에 저장.
	ifs.close();

	string read = "";

	cout << "== !ss.eof ==" << endl;
	while (!ss.eof()) {
		ss >> read; //ss의 내용을 read에 전달. 전달 단위는 연속된 문자열.(공백 기준으로 구분)
		cout << read << " ";
	}

	cout << endl << "== !ss.str() ==" << endl;
	read = ss.str(); // ss의 모든 데이터를 문자열로 변환하여 read에 전달.
	cout << endl << read << endl;


	return 0;
}