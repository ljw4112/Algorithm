#include <iostream>
using namespace std;

#define MAX 8+1
int arr[MAX];
bool visited[MAX];

void backTrace(int count, int n, int m) {
	if (count == m) {
		bool flag = true;

		for (int i = 0; i < m - 1; i++) {
			if (arr[i] > arr[i + 1])
				flag = false;
		}

		if (flag) {
			for (int i = 0; i < m; i++) {
				cout << arr[i] << " ";
			}
			cout << "\n";
		}
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (!visited[i]) {
			visited[i] = true;
			arr[count] = i;
			backTrace(count + 1, n, m);
			visited[i] = false;
		}
	}
}

int main() {
	int n, m, count = 0;			//1부터 n까지 길이가 m인 수열의 수
	cin >> n >> m;
	backTrace(count, n, m);

	return 0;
}