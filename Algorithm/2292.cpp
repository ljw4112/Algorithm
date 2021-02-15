#include <iostream>
using namespace std;

int main() {
	int n;	cin >> n;

	if (n == 1) {
		cout << 1 << endl;
		return 0;
	}

	int x = 1;
	for (int i = 1;; i++) {
		x = x + 6 * i;
		if (x >= n) {
			n = i;
			break;
		}
	}
	cout << n + 1 << endl;

	return 0;
}