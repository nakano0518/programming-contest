#include <iostream>
using namespace std;

void call(int n) {
    for(int i = 1; i <= n; i++) {
        int x = i;
        if(i % 3 == 0) {
            cout << i;
            cout << " \n"[i == n];
        } else {
            while(x > 0) {
                if(x % 10 == 3) {
                    cout << i;
                    cout << " \n"[i == n];
                    break;
                }
                x /= 10;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    call(n);
}