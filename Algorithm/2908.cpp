#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	int new_a = a / 100 + (a % 100 / 10) * 10 + (a % 100 % 10 * 100);
	int new_b = b / 100 + (b % 100 / 10) * 10 + (b % 100 % 10 * 100);

	if (new_a > new_b)
		cout << new_a << endl;
	else
		cout << new_b << endl;
}