#include <iostream>

using namespace std;

class Lanload {
public:
	void IamLandload() {
		cout << "건물주입니다." << endl;
	}
};

class Tenant {
public:
	void IamTenant() {
		cout << "세입자입니다." << endl;
	}
};

class Nation :public Lanload, public Tenant {
public:
	void Who() {
		cout << "저는 ";
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