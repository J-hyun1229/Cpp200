#include <iostream>
#include <atomic>

using namespace std;

int main() {
	atomic<int> d1(10);

	int n = 20;
	bool is_exchange = d1.compare_exchange_weak(n, 30);
	
	cout << boolalpha;
	cout << "d1: " << d1 << ", n: " << n << ", " << is_exchange << endl;

	atomic<int> d2 = ATOMIC_VAR_INIT(10);

	is_exchange = atomic_compare_exchange_weak(&d2, &n, 40);
	cout << "d2: " << d2 << ", n: " << n << ", " << is_exchange << endl;

	return 0;
}