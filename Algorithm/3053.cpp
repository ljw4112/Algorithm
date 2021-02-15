#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;

int main() {
	cout.precision(6);
	cout.setf(ios::fixed);

	int r;	cin >> r;

	double euclid;
	double taxi;

	euclid = pow(r, 2) * M_PI;
	taxi = 2 * (double)pow(r, 2);

	cout << euclid << endl;
	cout << taxi << endl;

	return 0;
}