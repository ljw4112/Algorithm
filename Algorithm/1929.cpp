#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b;	cin >> a >> b;
	vector<bool> prime;
	prime.resize(b + 1, false);

	for (int i = 2; i <= b; i++) {
		if (!prime[i] && i >= a) {
			cout << i << '\n';
		}

		for (int j = i; j <= prime.size(); j += i) {
			prime[j] = true;
		}
	}

	return 0;
}
