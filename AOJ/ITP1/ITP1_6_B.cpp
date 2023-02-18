#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>S(12, 0);
    vector<int>H(12, 0);
    vector<int>C(12, 0);
    vector<int>D(12, 0);
    for(int i = 0; i < n; i++) {
        string suit;
        int num;
        cin >> suit >> num;
        num--;
        if(suit == "S") {
            S[num] = 1;
        }else if(suit == "H") {
            H[num] = 1;
        }else if(suit == "C") {
            C[num] = 1;
        }else if(suit == "D") {
            D[num] = 1;
        }
    }
    for(int i = 0; i < 13; i++) {
        if(S[i]) {
            continue;
        }else {
            cout << "S" << " " << i + 1 << endl;
        }
    }
    for(int i = 0; i < 13; i++) {
        if(H[i]) {
            continue;
        }else {
            cout << "H" << " " << i + 1 << endl;
        }
    }
    for(int i = 0; i < 13; i++) {
        if(C[i]) {
            continue;
        }else {
            cout << "C" << " " << i + 1 << endl;
        }
    }
    for(int i = 0; i < 13; i++) {
        if(D[i]) {
            continue;
        }else {
            cout << "D" << " " << i + 1 << endl;
        }
    }
}