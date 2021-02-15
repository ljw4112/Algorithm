#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int* sort = new int[10001];
	fill_n(sort, 10001, 0);

	int t;	cin >> t;
	while (t--) {
		int tmp;	cin >> tmp;
		sort[tmp]++;
	}

	for (int i = 1; i < 10001; i++) {
		for (int j = 0; j < sort[i]; j++) {
			cout << i << '\n';
		}
	}

	return 0;
}