#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;

	if (x == 1) {
		cout << "1/1" << endl;
		return 0;
	}

	int sum = 1;	//대각선의 분모+분자의 합
	int cnt = 0;
	int num = 1;

	while (1) {
		sum++;
		cnt += num;
		if (cnt >= x)
			break;
		num++;
	}
}