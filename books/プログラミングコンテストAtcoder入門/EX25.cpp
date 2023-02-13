#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    long long x;
    cin >> N >> x;
    vector<long long> a(N);
    for(auto& ai: a) {
        cin >> ai;
    }

    long long result = 0;
    if(a[0] > x) {
        result += a[0] - x;
        a[0] = x;
    }

    for(int i = 0; i + 1 < N; i++) {
        if(a[i] + a[i + 1] > x) {
            result += a[i] + a[i + 1] - x;
            a[i + 1] = x - a[i];
        }
    }

    cout << result << endl;
}