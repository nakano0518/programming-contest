#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    int index;
    for(int i = 0; i < S.size(); i++) {
        if(isupper(S[i])) {
            index = i;
        } 
    }
    index++;
    cout << index << endl;
}