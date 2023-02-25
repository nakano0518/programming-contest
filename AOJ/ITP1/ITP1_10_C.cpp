#include <iostream>
#include <iomanip>
#include <vector>
#include <math.h>
using namespace std;

int main() {
	int n;
	vector<double> buff;
	while(cin >> n) {
		if(n == 0) break;
		double m = 0;
		vector<double> s(n, 0);
		for(int i = 0; i < n; i++) {
			cin >> s[i];
			m += s[i];
		}
		m /= n;

		double sd = 0;
		for(auto x: s) {
			sd += pow((x - m), 2);
		}
		sd /= n;
		buff.push_back(sd);
	}
	for(auto y: buff) {
		cout << fixed << sqrt(y) << setprecision(4) << endl;
	}
}