#include <iostream>
using namespace std;

int main() {
	int t;	cin >> t;
	while (t--) {
		int k, n;	cin >> k >> n;			//kÃş nÈ£.
		int result = 0;

		int** apt = new int* [k];
		for (int i = 0; i < k; i++) {
			apt[i] = new int[n];
		}

		for (int i = 0; i < k; i++) {
			for (int j = 0; j < n; j++) {
				apt[i][j] = 0;
			}
		}


		for (int i = 0; i < n; i++) {
			apt[0][i] = i + 1;
		}

		if (n == 1) {
			cout << 1 << endl;
			continue;
		}

		for (int i = 1; i < k; i++) {
			for (int j = 1; j < n; j++) {
				apt[i][0] = 1;
				for (int k = 0; k <= j; k++) {
					apt[i][j] += apt[i - 1][k];
				}
			}
		}

		for (int i = 0; i < n; i++) {
			result += apt[k - 1][i];
		}

		cout << result << endl;

		for (int i = 0; i < k; i++) {
			delete[] apt[i];
		}
		delete[] apt;
	}

	return 0;
}