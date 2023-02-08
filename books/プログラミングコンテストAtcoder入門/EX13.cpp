#include <iostream>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, long long>nums;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        nums[s]++; 
    }
    long long ans = 0;
    for(auto num: nums) {
        long long n = num.second;
        ans += n * (n - 1) / 2;
    }
    cout << ans << endl;
}