#include <iostream>
#include <string>

using namespace std;

struct Info {
	string conutry;
	struct Who {
		string name;
		string nickname;
	} who;
};

int main() {
	Info chuck = { "고려", {"장군 척준경", "소드마스터"} }; // country, Who에 각각 전달하여 초기화

	Info anjang = { "고구려", "안장왕 고흥안", "한주 사랑" }; // 분리하지 않아도 순서대로 전달 가능

	cout << chuck.conutry << ", " << chuck.who.name << ", " << chuck.who.nickname << endl;

	cout << anjang.conutry << ", " << anjang.who.name << ", " << anjang.who.nickname << endl;

	return 0;
}