#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[55][55], board1[8][8], board2[8][8], ans;

void sol(int a, int b) {
	int tmp1 = 0, tmp2 = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (arr[a + i][b + j] != board1[i][j]) tmp1++;
			if (arr[a + i][b + j] != board2[i][j]) tmp2++;
		}
	}

	ans = min(tmp1, ans);
	ans = min(tmp2, ans);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);
	ans = 64;

	int m, n;	cin >> m >> n;

	for (int i = 0; i < m; i++) {
		string chess;
		cin >> chess;

		for (int j = 0; j < n; j++) {
			if (chess[j] == 'B')arr[i][j] = 1;
			else arr[i][j] = 0;
		}
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			board1[i][j] = (i + j) % 2;
			board2[i][j] = (i + j + 1) % 2;
		}
	}

	for (int i = 0; i + 8 <= m; i++) {
		for (int j = 0; j + 8 <= n; j++) {
			sol(i, j);
		}
	}

	cout << ans << endl;

	return 0;
}