#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, q;
    string s;
    cin >> n >> q >> s;
    vector<int> c(n + 1, 0);
    for(int i = 1; i < n; i++) {
        c.at(i + 1) = c.at(i) + (s.substr(i - 1, 2)  == "AC");
    }
    for(int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << c.at(r) - c.at(l) << endl;
    }
}