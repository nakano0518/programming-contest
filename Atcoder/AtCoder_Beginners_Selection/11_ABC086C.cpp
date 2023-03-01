#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_travel() {
    int n;
    cin >> n;
    int pt = 0;
    int px = 0;
    int py = 0;
    for(int i = 0; i < n; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        int dt = t - pt;
        int dx = abs(x - px);
        int dy = abs(y - py);
        if(dt < dx + dy) {
            return false;
        }
        if(dt % 2 != (dx + dy) % 2 ) {
            return false;
        }
        pt = t;px = x;py = y;
    }
    return true;
}

int main() {
    if(is_travel()) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}