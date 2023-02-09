#include <iostream>
using namespace std;

bool is_reached() {
    int n;
    cin >> n;

    int pt = 0, px = 0, py = 0;
    for(int i = 0; i < n; i++) {
        int t, x, y;
        cin >> t >> x >> y;
        int dt = t - pt;
        int dx = abs(x - px);
        int dy = abs(y - py);
        if(dt < dx + dy) {
            return false;
        }
        if(dt % 2 != (dx + dy) % 2) {
            return false;
        }
        pt = t, px = x, py = y;
    }
    return true;
}

int main() {
    if(is_reached()) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}