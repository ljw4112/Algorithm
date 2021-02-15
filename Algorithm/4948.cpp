#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int);

int main() {
	int a = -1;
	while (a) {
		cin >> a;
		int cnt = 0;

		//vector<bool> prime;
		//prime.resize(a * 2 + 1, false);

		for (int i = a + 1; i < 2 * a; i++) {
			if (isPrime(i) && i != 1) {
				cnt++;
			}
		}

		if (a == 1) cnt = 1;

		if(a)
			cout << cnt << endl;
	}
}

bool isPrime(int a) {
	int sqrt_a = sqrt(a);
	for (int i = 2; i <= sqrt_a; i++) {
		if (a % i == 0)
			return false;
	}
	return true;
}
