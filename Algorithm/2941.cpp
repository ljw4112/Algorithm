#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	int cnt = 0;			//크로아티아 알파벳을 세는 변수

	for (int i = 0; i < (int)s.size(); i++) {
		if (s[i] == 'c') {
			if (s[i + 1] == '=' || s[i + 1] == '-') {
				cnt++;
				i++;
			}
			else
				cnt++;
		}
		else if (s[i] == 'd') {
			if ((s[i + 1] == 'z' && s[i + 2] == '=') || (s[i + 1] == '-')) {
				cnt++;
				if (s[i + 1] == 'z')
					i += 2;
				else
					i++;
			}
			else
				cnt++;
		}
		else if (s[i] == 'l' && s[i + 1] == 'j') {
			cnt++;
			i++;
		}
		else if (s[i] == 'n' && s[i + 1] == 'j') {
			cnt++;
			i++;
		}
		else if (s[i] == 's' && s[i+1]=='=') {
			cnt++;
			i++;
		}
		else if (s[i] == 'z' && s[i + 1] == '=') {
			cnt++;
			i++;
		}
		else {
			cnt++;
		}
	}

	cout << cnt << endl;
}