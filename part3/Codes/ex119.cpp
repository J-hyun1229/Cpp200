#include <iostream>
#include <string>

using namespace std;



class Ondal {
public:
	friend void GetYear(Ondal);
	
	void setYear(int year) {
		this->year = year;
	}

private:
	int year;
};

void GetYear(Ondal ondal) {
	cout << "아단성 전투 연도: " << ondal.year << endl;
}

int main() {
	Ondal od;
	od.setYear(590);

	GetYear(od);

	return 0;
}