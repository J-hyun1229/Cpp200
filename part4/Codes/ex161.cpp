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
	d.insert({ 5,"test1" });
	d.insert({ 3,"test2" });
	d.insert({ 11,"test3" });

	d[3] = "test 수정";
	
	auto res = d.find(11);
	if (res != d.end())
		cout << "== 검색 성공: " << res->first << ", " << res->second << endl;
	else
		cout << "== 검색 실패! ==" << endl;

	d.erase(5);

	Print(d);

	return 0;
}