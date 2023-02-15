#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double r;
    cin >> r;
    const double PI = M_PI;
    double S = r * r * PI;
    double C = 2 * r * PI;
    cout << fixed << setprecision(6) << S << " " << C;
    /*
    円周率
    #include <cmath>
    M_PIが円周率
    */
}