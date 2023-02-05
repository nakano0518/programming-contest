#include <bits/stdc++.h>
using namespace std;

int main() {
	int N;
	cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    map<int, int> cnt;

    for(int a: A) {
        if(cnt.count(a)) {
            cnt.at(a)++;
        }
        else {
            cnt[a] = 1;
        }
    }

    int mode_cnt = 0;
    int mode = -1;
    for(pair<int, int>p: cnt) {
        int key = p.first;
        int value = p.second;
        if(mode_cnt < value) {
            mode_cnt = value;
            mode = key;
        }
    }
    cout << mode << " " << mode_cnt << endl;

}