#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int H, W;
int A[10][10];
bool used[10][10];

int dfs(int h, int w, vector<pair<int, int>> v) {
    if (h == H - 1 && w == W - 1) {
        // ゴールに到達したら、通過した数字がすべて異なるかチェック
        vector<int> nums;
        for (auto p : v) {
            nums.push_back(A[p.first][p.second]);
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < (int)nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) return 0;
        }
        return 1;
    }
    int res = 0;
    if (h < H - 1) {
        v.push_back(make_pair(h + 1, w));
        res += dfs(h + 1, w, v);
        v.pop_back();
    }
    if (w < W - 1) {
        v.push_back(make_pair(h, w + 1));
        res += dfs(h, w + 1, v);
        v.pop_back();
    }
    return res;
}

int main() {
    cin >> H >> W;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> A[i][j];
        }
    }
    vector<pair<int, int>> v;
    v.push_back(make_pair(0, 0));
    cout << dfs(0, 0, v) << endl;
    return 0;
}