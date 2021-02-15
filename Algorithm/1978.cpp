#include <iostream>
using namespace std;

int main() {
	int cnt = 0;
	int n;	cin >> n;
	while (n--) {
		int t;	cin >> t;
		if (t == 1)	continue;

		bool IDM = 0;
		for (int i = 2; i < t; i++) {
			if (t % i == 0) {
				IDM = 1;
				break;
			}
		}

		if (!IDM)	cnt++;
	}

	cout << cnt << endl;
}