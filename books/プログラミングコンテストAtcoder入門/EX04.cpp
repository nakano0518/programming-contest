#include <iostream>
using namespace std;

int main() {
    int k, a, b;
    cin >> k >> a >> b;
    bool flg = false;
    for(int i = a; i <= b; i++) {
        if(i % k == 0) flg = true;
    }
    if(flg) {
        cout << "OK" << endl;
    }
    else {
        cout << "NG" << endl;
    }
}

