#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> d(N);
    for(auto& di: d) {
        cin >> di;
    }
    sort(d.begin(), d.end());
    int cnt = 0;
    for(int i = 1; i <= N; i++) {
        if(d[i] == d[i - 1]) {
            continue;
        }
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}