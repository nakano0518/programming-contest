#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	
	double S = (a * b * sin((c / 180) * M_PI)) / 2;
	double L = a + b + sqrt(a * a + b * b - 2 * a * b * cos((c / 180) * M_PI));
	double h = b * sin((c / 180) * M_PI);
	cout << fixed << S << endl << L << endl << h <<setprecision(5) << endl;
}