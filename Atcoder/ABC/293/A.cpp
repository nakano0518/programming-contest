#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    for(int i = 0; i < S.size(); i= i+2) {
        char tmp;
        tmp = S[i];
        S[i] = S[i + 1];
        S[i + 1] = tmp;
    }
    cout << S << endl;
    return 0;
}