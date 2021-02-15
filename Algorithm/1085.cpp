#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int x, y, w, h;		//x,y : 현재위치 . w,h : 오른쪽 위의 점
	cin >> x >> y >> w >> h;

	int horizon_head = abs(w - x);
	int horizon_zero = x;

	int vertic_head = abs(h - y);
	int vertic_zero = y;

	vector<int> size;
	size.push_back(horizon_head);
	size.push_back(horizon_zero);
	size.push_back(vertic_head);
	size.push_back(vertic_zero);

	sort(size.begin(), size.end());
	cout << size[0] << endl;

	return 0;
}