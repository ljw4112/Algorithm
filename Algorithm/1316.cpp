#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin >> x;

	int num = 0;
	while (x--) {
		bool ch[26] = { false };
		string s;
		cin >> s;

		bool group = true;
		for (int i = 0; i < s.length(); i++) {
			if (!ch[s[i] - 97]) {
				ch[s[i] - 97] = true;
				continue;
			}
			if (ch[s[i] - 97] && i != 0 && s[i-1] != s[i]) {
				group = false;
				break;
			}
		}

		if (group)
			num++;
	}

	cout << num << endl;
}