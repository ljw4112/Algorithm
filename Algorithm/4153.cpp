#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int a = -1, b = -1, c = -1;
	while (a && b && c) {
		vector<int> triangle;
		cin >> a >> b >> c;
		triangle.push_back(a);
		triangle.push_back(b);
		triangle.push_back(c);

		sort(triangle.begin(), triangle.end());
		a = triangle[0];
		b = triangle[1];
		c = triangle[2];

		if (a != 0) {
			if (c * c == a * a + b * b)
				cout << "right" << endl;
			else
				cout << "wrong" << endl;
		}
	}
}