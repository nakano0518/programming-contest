#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

vector<int> DX = {1, 0, -1, 0};
vector<int> DY = {0, 1, 0, -1};

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> S(H);

    for(auto& row: S) {
        cin >> row;
    }

    queue<pair<int, int>> que;
    vector<vector<int>> dist(H, vector<int>(W, -1));

    que.push({0, 0});
    dist[0][0] = 0;

    while(!que.empty()) {
        pair<int, int> tmp = que.front();
        int x = tmp.first;
        int y = tmp.second;
        que.pop();
        for(int dir = 0; dir < 4; dir++) {
            int x2 = x + DX[dir];
            int y2 = y + DY[dir];
            if(x2 < 0 || x2 >= H || y2 < 0 || y2 >= W) {
                continue;
            }
            if(S[x2][y2] == '#') {
                continue;
            }
            if(dist[x2][y2] != -1) {
                continue;
            }
            que.push({x2, y2});
            dist[x2][y2] = dist[x][y] + 1;
        }
    }

    int white = 0;
    for(int i = 0; i < H; i++) {
        for(int j = 0; j < W; j++) {
            if(S[i][j] == '.') {
                white++;
            }
        }
    }

    if(dist[H - 1][W - 1] != -1) {
        cout << white - (dist[H - 1][W - 1] + 1) << endl;
    }
    else {
        cout << -1 << endl;
    }
}