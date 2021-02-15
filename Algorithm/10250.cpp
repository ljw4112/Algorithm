#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int h, w, n;
		cin >> h >> w >> n;

		int room_num = 101;
		int default_num = 101;
		for (int i = 0; i < n; i++) {
			//cout << room_num << " ";
			if (i == n - 1) {
				cout << room_num << endl;
				break;
			}

			if (room_num / 100 == h) {
				room_num = ++default_num;
			}
			else {
				room_num += 100;
			}
		}
		//cout << endl;
	}

	return 0;
}