#include <iostream>
#include <string>
using namespace std;

bool is_ac(string s) {
    if(s.at(0) != 'A') {
        return false;
    }

    int cnt = 0;
    for(int i = 2; i < s.size() - 1; i++) {
        if(s.at(i) == 'C') cnt++;
    }
    if(cnt != 1) return false;

    int cnt_upper = 0;
    for(auto c: s) {
        if(isupper(c)) cnt_upper++;
    }
    if(cnt_upper != 2) {
        return false;
    }
    return true;
} 

int main() {
    string s;
    cin >> s;
    if(is_ac(s)) {
        cout << "AC" << endl;
    }
    else{
        cout << "WA" << endl;
    }
}