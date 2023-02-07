#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end(), greater<int>());
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            ans += a.at(i);
        }
        else {
            ans -= a.at(i);
        }
    }
    cout << ans << endl;
}
