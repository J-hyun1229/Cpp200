#include <iostream>
#include <atomic>

using namespace std;

int main() {
	atomic<int> d1 = 1;
	d1++;
	d1 += 1;
	d1.fetch_add(1);
	atomic_fetch_add(&d1, 1);

	atomic<int> d2 = 100;
	d2--;
	d2 -= 1;
	d2.fetch_sub(1);
	atomic_fetch_sub(&d2, 1);

	cout << "d1: " << d1 << ", d2: " << d2 << endl;

	return 0;
}