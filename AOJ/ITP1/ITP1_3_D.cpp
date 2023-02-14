#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    for(int i = 1; i <= c; i++) {
        if(c % i == 0) {
            if(i >= a && i <= b) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}