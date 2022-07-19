#include <iostream>
#include <string>

using namespace std;

class C1 {
public:
	int number;
	double prime;
	string word;

	C1() = default; // 멤머 변수를 초기화.
};

class C2 {
public:
	int number;
	double prime;
	string word;

	C2() {};
};

int main() {

	C1* c1 = new C1();
	cout << "C1: " << c1->number << ", " << c1->prime << ", " << c1->word << endl;

	C2* c2 = new C2();
	cout << "C2: " << c2->number << ", " << c2->prime << ", " << c2->word << endl;

	return 0;

}