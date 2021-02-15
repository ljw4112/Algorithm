#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int n;	cin >> n;
	string temp;
	vector<int> v;

	for (int i = 1; i < n; i++) {
		temp = to_string(i);
		int sum = 0;

		for (int j = 0; j < (int)temp.size(); j++) {
			sum += temp[j] - '0';
		}

		sum += stoi(temp);

		if (n == sum) {
			v.push_back(i);
		}
	}
	if (v.empty())
		cout << 0 << endl;
	else
		cout << v[0] << endl;

}