#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;	cin >> t;
	while (t--) {
		int x1, y1, r1, x2, y2, r2;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

		double distance = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

		if (distance == 0) {
			if (r2 == r1) {
				cout << -1 << endl;
			}
			else
				cout << 0 << endl;
			continue;
		}

		if (distance > r1 + r2) {
			cout << 0 << endl;
		}
		else if (distance == r1 + r2) {
			cout << 1 << endl;
		}
		else if (distance < r1 + r2) {
			if (r1 < r2 && r1 + distance == r2) {
				cout << 1 << endl;
			}
			else if (r2 < r1 && r2 + distance == r1) {
				cout << 1 << endl;
			}
			else if (r1 < r2 && r1 + distance < r2) {
				cout << 0 << endl;
			}
			else if (r2 < r1 && r2 + distance < r1) {
				cout << 0 << endl;
			}
			else
				cout << 2 << endl;
		}
	}
}