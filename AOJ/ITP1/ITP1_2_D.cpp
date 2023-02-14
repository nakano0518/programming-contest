#include <iostream>
using namespace std;

int main() {
    int W, H, x, y, r;
    cin >> W >> H >> x >> y >> r;
    bool flg = true;
    if(y + r > H) {
        flg = false;
    }
    if(x + r > W) {
        flg = false;
    }
    if(y - r < 0) {
        flg = false;
    }
    if(x - r < 0) {
        flg = false;
    }

    if(flg) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}