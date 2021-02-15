#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int a) {
	int sqrt_a = sqrt(a);
	for (int i = 2; i <= sqrt_a; i++) {
		if (a % i == 0)
			return false;
	}
	return true;
}

int main() {
	int t;	cin >> t;
	while (t--) {
		int a;	cin >> a;

		int half_a1 = a / 2;
		int half_a2 = a / 2;

		while (!isPrime(half_a1) || !isPrime(half_a2)) {
			++half_a1;	--half_a2;
		}

		cout << half_a2 << " " << half_a1 << endl;
	}
}