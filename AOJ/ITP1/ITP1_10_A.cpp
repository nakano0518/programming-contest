#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	double ans = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << fixed << ans << setprecision(5);

}