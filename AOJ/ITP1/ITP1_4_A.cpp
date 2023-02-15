#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b; //int 10^9くらいまで
    cin >> a >> b;
    int d = a / b;
    int r = a % b;
    double f = (double) a / (double) b;
    cout << d << " " << r << " " << fixed << setprecision(5) << f;
    //小数第n位まで求める(double型のf)
    /*
        #include <iomanip>
        cout << fixed << setprecision(n) << f;
    */
}