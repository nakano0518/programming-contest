#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;
    vector<int> check(K, 0);
    long long A;
    for(int i = 0; i < N; i++) {
        cin >> A;
        if(A > K) {
            continue;
        } 
        else {
            check[A] = 1;
        }
    }
    // for(int i = 0; i < K; i++) {
    //     cout << i << check[i] << endl;
    // }
    long long result = 0;
    for(int i = 0; i < K; i++) {
        if(check[i] == 0) {
            result = i;
            break;
        }
        if(i == K - 1) {
            result = i + 1;
        }
    }
    cout << result << endl;
}