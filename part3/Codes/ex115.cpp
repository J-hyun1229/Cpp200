#include <iostream>

using namespace std;

class Rent {
public:
	void Payment() {
		cout << "�Ӵ�Ḧ �޽��ϴ�." << endl;
	}

};

class LandLoad :public Rent {
public:
	void GetMoney() {
		cout << "�ǹ��ֶ� ";
		Payment();
	}

};

int main() {
	LandLoad master;
	master.GetMoney();

	return 0;
}