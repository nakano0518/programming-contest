#include <iostream>
#include <vector>
using namespace std;

long long rec(int n, long long x, 
              const vector<long long>& l,
              const vector<long long>& s) { //const参照渡し
    if(n == 0) {
        return 1;
    }

    if(x == 1) {
        return 0;
    }
    else if(x <= l.at(n - 1) + 1) {
        return rec(n - 1, x - 1, l, s);
    }
    else if(x == l.at(n - 1) + 2) {
        return s.at(n - 1) + 1;
    }
    else if(x <= l.at(n - 1) * 2 + 2) {
        return rec(n - 1, x - l.at(n - 1) - 2, l ,s) + s.at(n - 1) + 1;
    }
    else {
        return s.at(n - 1) * 2 + 1;
    }

}

int main() {
    int n;
    long long x;
    cin >> n >> x;

    //レベルnのバーガーの長さl、パティ数sとする
    vector<long long>l(n + 1, 1);
    vector<long long>s(n + 1, 1);
    for(int i = 1; i < n; i++) {
        l.at(i) = l.at(i - 1) * 2 + 3;
        s.at(i) = s.at(i - 1) * 2 + 1;
    }
    cout << rec(n, x, l, s) << endl;
}