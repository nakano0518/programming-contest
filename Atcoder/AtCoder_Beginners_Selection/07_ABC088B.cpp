#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(auto& ai: a) {
        cin >> ai;
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    int a_score = 0;
    int b_score = 0;
    for(int i = 0; i < N; i++) {
        if(i % 2 == 0) {
            a_score += a[i];
        }
        else {
            b_score += a[i];
        }
    }
    cout << (a_score - b_score) << endl;
    return 0;
}