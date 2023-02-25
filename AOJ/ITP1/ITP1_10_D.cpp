#include <iostream>
#include <iomanip>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<double> x(n, 0);
	vector<double> y(n, 0);
	for (int i = 0; i < n; i++) cin >> x[i];
	for (int i = 0; i < n; i++) cin >> y[i];

	double p1 = 0, p2 = 0, p3 = 0 , pm = 0;
	for (int i = 0; i < n; i++) {
		p1 += abs(x[i] - y[i]);
		p2 += pow(abs(x[i] - y[i]), 2);
		p3 += pow(abs(x[i] - y[i]), 3);
		pm = max(pm, abs(x[i] - y[i]));
	}
	p2 = pow(p2, (double)1/(double)2);
	p3 = pow(p3, (double)1/(double)3);
	cout << fixed << setprecision(5) << p1 << endl << p2 << endl << p3 << endl << pm << endl;

}