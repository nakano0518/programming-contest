#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    for(int i = 0; i < S.size(); i++) {
        S[i] = toupper(S[i]);
    }
    cout << S << endl;
    return 0;
}