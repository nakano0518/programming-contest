#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    double N;
    cin >> N;
    vector<int> X(5 * N);
    for(int i = 0; i < 5 * N; i++) {
        cin >> X[i];
    }
    sort(X.begin(), X.end());
    double sum = 0;
    for(int i = N; i < 4 * N; i++) {
        sum += X[i];
    }
    double devide = 3.0 * N;
    double ans = sum / devide;
    cout << fixed << ans << setprecision(7) << endl;
}