#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> x(3);
    for(auto& xi: x) {
        cin >> xi;
    }
    sort(x.begin(), x.end());
    for(int i = 0; i < x.size(); i++) {
        cout << x[i] << " \n"[x.size() - 1 == i];
    }
}