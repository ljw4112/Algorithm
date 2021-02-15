#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;	cin >> n;
	int cnt = 1;
	int startNum = 666;

	for (int i = 0; i < n; i++) {
		if (i == n - 1)
			break;
		while (1) {
			startNum++;
			string tmp = to_string(startNum);
			if (tmp.find("666", 0, 3) != string::npos) {
				break;
			}
		}
	}

	cout << startNum << endl;

	return 0;
}