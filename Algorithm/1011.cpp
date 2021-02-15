#include <iostream>
using namespace std;

int main() {
	int t;	cin >> t;
	while (t--) {
		int x, y;
		cin >> x >> y;

		int cnt = 0;
		int now_pos = x;
		int speed = 1;
		
		while (now_pos < y) {
			now_pos += speed;
			cnt++;
			speed++;
		}

		cout << cnt << endl;
	}
}