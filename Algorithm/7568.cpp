#include <iostream>
using namespace std;

int main() {
	int t;	cin >> t;

	pair<int, int> people[50];
	int rank[50];
	fill_n(rank, 50, 1);

	for (int i = 0; i < t; i++) {
		cin >> people[i].first >> people[i].second;
	}

	for (int i = 0; i < t; i++) {
		for (int j = 0; j < t; j++) {
			if (people[i].first > people[j].first && people[i].second > people[j].second) {
				rank[j]++;
			}
		}
	}

	for (int i = 0; i < t; i++) {
		cout << rank[i]<< " ";
	}

	return 0;
}