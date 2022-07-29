#include <iostream>
#include <map>
#include <string>

using namespace std;

void Print(const map<int, string>& data) {
	cout << "== Print ==" << endl;

	for (auto it = data.begin(); it != data.end(); ++it)
		cout << it->first << " : " << it->second << ", ";
	cout << endl;
}

int main() {
	map<int, string> d;
	d.insert({ 0,"1st" });
	d.insert({ 1,"2nd" });

	Print(d);

	auto ret = d.insert({ 1, "3nd" });

	if (ret.second == true)
		cout << "== 데이터 추가 성공 ==" << endl;
	else
		cout << "== 데이터 추가 실패 ==" << endl;

	d.at(0) = "수정1";
	Print(d);
	
	return 0;
}