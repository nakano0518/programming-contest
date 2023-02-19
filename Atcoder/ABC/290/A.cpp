#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    vector<int> B(M);
    for(auto& a: A) {
        cin >> a;
    }
    for(auto& b: B) {
        cin >> b;
    }
    int cnt = 0;
    for(auto& b: B) {
        b--;
        cnt += A[b];
    }
    cout << cnt << endl;
}