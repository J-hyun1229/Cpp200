#include <iostream>

using namespace std;

enum Status {
	normal = 0,
	abnormal,
	disconnet = 100,
	close
};

enum class MachineStatus : char {
	normal = 'n',
	abnormal,
	disconnet = 100,
	close
};

int main() {
	MachineStatus machine = MachineStatus::abnormal;

	switch (machine) {
	case MachineStatus::normal:
		cout << "Status: normal" << endl;
		break;

	case MachineStatus::abnormal:
		cout << "Status: abnormal" << endl;
		break;

	case MachineStatus::disconnet:
		cout << "Status: disconnet" << endl;
		break;

	case MachineStatus::close:
		cout << "Status: close" << endl;
		break;

	default:
		cout << "default" << endl;
		break;
	}


	cout << "machine: " << static_cast<int>(machine) << ", " << static_cast<char>(machine) << endl;

	return 0;

}