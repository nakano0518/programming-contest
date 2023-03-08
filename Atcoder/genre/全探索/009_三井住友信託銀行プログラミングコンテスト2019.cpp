#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int N;
    string S;
    cin >> N >> S;
    int cnt = 0;
    for(int i = 0; i < 1000; i++) {
        vector<int> c = {i / 100, (i / 10) % 10, i % 10};
        int n = 0;
        for(int j = 0; j < N; j++) {
            if(S[j] == ('0' + c[n])) n++;
            if(n == 3) break;
        }
        if(n == 3) cnt++;
    }
    cout << cnt << endl;
    return 0;
}