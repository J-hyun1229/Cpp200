#include <iostream>

using namespace std;

class Lanload {
public:
	void IamLandload() {
		cout << "�ǹ����Դϴ�." << endl;
	}
};

class Tenant {
public:
	void IamTenant() {
		cout << "�������Դϴ�." << endl;
	}
};

class Nation :public Lanload, public Tenant {
public:
	void Who() {
		cout << "���� ";
		if (is_landload)
			IamLandload();
		else
			IamTenant();
	}

	bool is_landload;
};

int main() {
	Nation nation;
	nation.is_landload = true;
	nation.Who();
	
	return 0;
}