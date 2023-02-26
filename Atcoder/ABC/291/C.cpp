#include<bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    string S;
    cin >> N >> S;
    set<pair<int, int>> checked({{0, 0}});
    int x = 0;
    int y = 0;
    for(auto c : S) {
        if(c=='U') y++;
		if(c=='D') y--;
		if(c=='R') x++;
		if(c=='L') x--;
        if(checked.find({x, y}) != checked.end()) {
            cout << "Yes" << endl;
            return 0;
        }
        checked.insert({x, y});
    }
    cout << "No" << endl;
}