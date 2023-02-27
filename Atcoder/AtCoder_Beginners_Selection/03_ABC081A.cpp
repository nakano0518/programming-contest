#include <iostream>
using namespace std;

int main() {
    char s;
    int cnt = 0;
    while(cin >> s) {
        if(s == '1') cnt++;
    }
    cout << cnt << endl;
    return 0;
}