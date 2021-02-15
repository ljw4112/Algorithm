#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int one_time = 2;
	int time = 0;
	for (int i = 0; i < (int)s.size(); i++) {
		if (s[i] >= 'P' && s[i] <= 'S') {
			time += 8;
		}
		else if (s[i] >= 'W' && s[i] <= 'Z') {
			time += 10;
		}
		else if (s[i] >= 'T' && s[i] <= 'V') {
			time += 9;
		}
		else {
			int tmp = s[i] - 65;
			time += tmp / 3 + one_time + 1;
		}
	}
	cout << time << endl;

	return 0;
}