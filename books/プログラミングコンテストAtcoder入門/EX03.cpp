#include <iostream>
using namespace std;

int main() {
    int h, a;
    cin >> h >> a;
    int cnt = 0;
    while(h > 0) {
        h -= a;
        cnt++;
    }
    cout << cnt << endl;
} 