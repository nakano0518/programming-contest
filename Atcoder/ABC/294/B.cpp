#include <iostream>
#include <vector>
#include <string>

using namespace std;




int main() {
    string ALP = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int H, W;
    cin >> H >> W;
    vector<vector<int>> table(H, vector<int>(W));
    for(int h = 0; h < H; h++) {
        for(int w = 0; w < W; w++) {
            cin >> table[h][w];
        }
    }
    for(int h = 0; h < H; h++) {
        for(int w = 0; w < W; w++) {
            if(table[h][w] == 0) {
                cout << ".";
            } else {
                cout << ALP[table[h][w] - 1];
            }
        }
        cout << endl;
    }
    
}