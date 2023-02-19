#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;
    int cnt = 0;
    for(int i = 0; i < N; i++) {
        if(S[i] == 'o') {
            cnt++;
            if(cnt > K) {
                cout << "x";
            }
            else {
                cout << "o";
            } 
        }
        else {
            cout << "x";
        }
    }
}