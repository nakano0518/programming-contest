#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M;
    cin >> N >> M;
    vector<int> S[10];//S[N]は、N個のvector<int>を要素とする配列
    int P[10];
    for(int i = 0; i < M; i++) {
        int k;cin >> k;
        for(int j = 0; j < k; j++) {
            int s; cin >> s; s--;
            S[i].push_back(s);
        }
    }
    for(int i = 0; i < M; i++) {
        cin >> P[i];
    }
    int ans = 0;
    for(int msk = 0; msk < (1 << N); msk++) {
        int ok = 0;
        for(int m = 0; m < M; m++) {
            int cnt = 0;
            for(auto s: S[m]) {
                if(msk & (1 << s))cnt++;
            }
            if(cnt % 2 == P[m])ok++;
        }
        if(ok == M)ans++;
    }
    cout << ans << endl;

}