#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    int Q;
    cin >> N >> Q;
    vector<int> ck(Q+1, 0);

    for(int i = 1; i <= Q; i++) {
        int c;
        int x;
        cin >> c >> x;
        if(c == 1) {
            ck[x] += ck[x] + 1; 
        }
        else if(c == 2) {
            ck[x] += ck[x] + 2; 
        }
        else if(c == 3) {
            if(ck[x] >= 2) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}