#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b;	cin >> a >> b;

	vector<int> result;
	int sum = 0;
	
	for (int i = a; i <= b; i++) {
		bool idm = 0;
		if (i == 1)
			continue;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				idm = 1;
				break;
			}
		}
		if (!idm) {
			result.push_back(i);
			sum += i;
		}
	}

	if (result.empty()) {
		cout << -1 << endl;
	}
	else {
		cout << sum << endl;
		cout << result[0] << endl;
	}

	return 0;
}