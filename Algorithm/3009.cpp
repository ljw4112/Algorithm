#include <iostream>
using namespace std;

int main() {
	int x1, x2, x3, x4;
	int y1, y2, y3, y4;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	int x[1001], y[1001];
	fill_n(x, 1001, 0);	fill_n(y, 1001, 0);
	
	x[x1]++;
	x[x2]++;
	x[x3]++;

	if (x[x1] == 1) {
		x4 = x1;
	}
	else if (x[x2] == 1) {
		x4 = x2;
	}
	else if (x[x3] == 1) {
		x4 = x3;
	}

	y[y1]++;
	y[y2]++;
	y[y3]++;

	if (y[y1] == 1) {
		y4 = y1;
	}
	else if (y[y2] == 1) {
		y4 = y2;
	}
	else if (y[y3] == 1) {
		y4 = y3;
	}

	cout << x4 << " " << y4 << endl;
} 