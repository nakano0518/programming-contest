#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> G(n);
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--;v--;
        G.at(u).push_back(v);
        G.at(v).push_back(u);
    }

    vector<int>color(n);
    for(auto &c: color) { //要素内容を上書きするときは参照渡し
        cin >> c;
    }

    for(int i= 0; i < q; i++) {
        int type, x;
        cin >> type >> x;
        x--;
        cout << color.at(x) << endl;

        if(type == 1) {
            for(auto v: G.at(x)) {
                color.at(v) = color.at(x);
            }
        }
        if(type == 2) {
            int y;
            cin >> y;
            color.at(x) = y;
        }
            
    }
}