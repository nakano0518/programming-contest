#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<long long> A(N);
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int cnt = 0;
    bool flg = false;
    while(true){
        for(int i = 0; i < N; i++) {
            if(A[i] % 2 == 1) {
                flg = true;
            } 
            else {
                A[i] /= 2;
            }
        }
        if(flg) {
            break;
        }
        else {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}