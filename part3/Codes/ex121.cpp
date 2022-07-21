#include <iostream>

using namespace std;

class Base {
public:
	virtual void Display() = 0;
};

class Derived :public Base {
public:
	void Display() {
		cout << "DIsplay() of Derived is called" << endl;
	}
};

int main() {
	Derived child;
	child.Display();

	Base *b = new Derived();
	b->Display();

	delete b;

	return 0;
}