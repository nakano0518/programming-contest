#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for(auto &ai: a) {
        cin >> ai;
    }
    
    int minus_cnt = 0;
    long long sum_abs = 0;
    long long min_abs = 1LL << 60;
    for(int i = 0; i < n; i++) {
        if(a.at(i) < 0) minus_cnt++;
        sum_abs += abs(a.at(i));
        min_abs = min(abs(a.at(i)), min_abs);
    }
    if(minus_cnt % 2 == 0) {
        cout << sum_abs << endl;
    }
    else {
        cout << sum_abs - min_abs * 2 << endl;
    }
}