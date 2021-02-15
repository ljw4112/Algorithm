#include <iostream>
using namespace std;

int main() {
	long long fix_spend;
	long long dynamic_spend;
	long long price;
	cin >> fix_spend >> dynamic_spend >> price;

	if (dynamic_spend >= price) {
		cout << -1 << endl;
		return 0;
	}

	cout << fix_spend / (price - dynamic_spend) + 1 << endl;
	
	return 0;
}