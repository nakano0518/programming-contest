#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<bool> is_call(N + 1, false);

    int call_num;
    for(int i = 1; i <= N; i++) {
        cin >> call_num;
        if(is_call[i] == false) {
            is_call[call_num] = true;
        }
    }

    int cnt = 0;
    for(int i = 1; i <= N; i++) {
        if(is_call[i] == false) {
            cnt++;
        }
    }
    cout << cnt << endl;

    for(int i = 1; i <= N; i++) {
        if(is_call[i] == false) {
            cout << i << " \n"[i == N];
        }
    }
    return 0;
}