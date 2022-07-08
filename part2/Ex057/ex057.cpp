#include <iostream>
#include <string>

using namespace std;

int main() {
	string king = "조선 세종";
	string fav1 = "고기";
	string fav2 = "야근";

	string king_info = "";

	king_info += king;
	king_info += "은 ";
	king_info += fav1;
	king_info.append("와 ");
	king_info.append(fav2);
	king_info.append("을 좋아했습니다.");

	cout << king_info << endl;

	return 0;
}