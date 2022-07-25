#include <iostream>
#include <atomic>

using namespace std;

int main() {
	atomic<int> d1(10);
	atomic<int> d2 = ATOMIC_VAR_INIT(20);
	atomic<int> d3 = d1.exchange(d2.load());

	cout << d1 << ", " << d2 << ", " << d3 << endl;

	atomic_exchange(&d1, d3);
	atomic_exchange(&d2, d1.load());
	atomic_exchange(&d3, 55);

	cout << d1 << ", " << d2 << ", " << d3 << endl;

	return 0;
}