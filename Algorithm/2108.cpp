#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> s;
	vector<int> num;	num.resize(8001, 0);
	int t;	cin >> t;
	double sum = 0;
	int middle = 0;
	int many = 0;
	int distance;

	while (t--) {
		int tmp;	cin >> tmp;
		s.push_back(tmp);
		sum += tmp;
		if (tmp > 0)
			num[4000 + tmp]++;
		else
			num[abs(tmp)]++;
	}
	sort(s.begin(), s.end());

	sum /= (int)s.size();
	sum = round(sum);
	middle = s[(int)s.size() / 2];
	distance = s[(int)s.size() - 1] - s[0];

	many = s[0];
	int frequency;
	if (s[0] >= 0) {
		frequency = num[s[0] + 4000];
	}
	else {
		frequency = num[s[0]];
	}

	bool Second = false;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] >= 0) {
			if (frequency < num[s[i] + 4000]) {
				frequency = num[s[i] + 4000];
				many = s[i];
			}
		}
		else {
			if (frequency < num[s[i]]) {
				frequency = num[s[i]];
				many = s[i];
			}
		}
		
	}

	cout << sum << endl;
	cout << middle << endl;
	cout << distance << endl;

	return 0;
}