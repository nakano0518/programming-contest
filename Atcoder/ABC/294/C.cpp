#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> B[i];
    }

    vector<int> C(N + M);
    int i = 0, j = 0, k = 0;
    while (i < N && j < M) {
        if (A[i] < B[j]) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }
    while (i < N) {
        C[k++] = A[i++];
    }
    while (j < M) {
        C[k++] = B[j++];
    }

    vector<int> ansA(N), ansB(M);
    for (int i = 0; i < N; i++) {
        ansA[i] = lower_bound(C.begin(), C.end(), A[i]) - C.begin() + 1;
    }
    for (int i = 0; i < M; i++) {
        ansB[i] = lower_bound(C.begin(), C.end(), B[i]) - C.begin() + 1;
    }

    for (int i = 0; i < N; i++) {
        cout << ansA[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < M; i++) {
        cout << ansB[i] << " ";
    }
    cout << endl;
    return 0;
}
