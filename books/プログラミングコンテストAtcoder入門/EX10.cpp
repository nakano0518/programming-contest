#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> dx = {-1, -1, -1, 0, 1, 1, 1, 0};
vector<int> dy = {-1, 0, 1, 1, 1, 0, -1, -1};

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    for(auto &row: s) {
        cin >> row;
    }

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            if(s.at(i).at(j) == '#') continue;
            int cnt = 0;
            for(int k = 0; k < 8; k++) {
                int x = i + dx.at(k);
                int y = j + dy.at(k);
                if(x < 0 || x >= h || y < 0 || y >= w) continue;
                if(s.at(x).at(y) == '#') cnt++;
            }
            s.at(i).at(j) = '0' + cnt;
        }
    }

    for(auto row: s) {
        cout << row << endl;
    }
}