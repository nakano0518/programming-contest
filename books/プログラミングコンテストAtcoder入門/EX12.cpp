#include <iostream>
#include <vector>
using namespace std;

constexpr int M = 101; 

int main() {
    int n;
    cin >> n;
    vector<int> exist(M, 0);
    for(int i = 0; i < n; i++) {
        int d;
        cin >> d;
        exist.at(d) = 1;
    }
    int ans = 0;
    for(auto v: exist) {
        ans += v;
    }
    cout << ans << endl;
}