#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<bool> dp(n + 1, false);
    dp[0] = true;
    for(int i = 1; i <= n; i++) {
        if(i >= 5 && dp[i -5] && s.substr(i - 5, 5) == "erase") {
            dp[i] = true;
        }
        if(i >= 6 && dp[i - 6] && s.substr(i - 6, 6) == "eraser") {
            dp[i] = true;
        }
        if(i >= 5 && dp[i -5] && s.substr(i - 5, 5) == "dream") {
            dp[i] = true;
        }
        if(i >= 7 && dp[i - 7] && s.substr(i - 7, 7) == "dreamer") {
            dp[i] = true;
        }
    }

    if(dp[n]) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;

}