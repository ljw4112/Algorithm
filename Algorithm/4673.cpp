#include <bits/stdc++.h>
using namespace std;
bool num[10001];

int self_Num(int n) {
	int sum = n;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}

	return sum;
}

int main() {
	for (int i = 1; i < 10001; i++) {
		int x = self_Num(i);
		num[x] = true;
	}

	for (int i = 1; i < 10001; i++) {
		if (!num[i]) {
			cout << i << endl;
		}
	}

	return 0;
}