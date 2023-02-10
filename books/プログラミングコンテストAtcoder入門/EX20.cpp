#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    int contain_cnt = 0;
    int b_left_end_cnt = 0;
    int a_right_end_cnt = 0;
    int both_end_cnt = 0;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < s.size() - 1; j++) {
            if(s.at(j) == 'A' && s.at(j + 1) == 'B') {
                contain_cnt++;
            }
        }
        if(s.at(0) == 'B' && s.back() == 'A') {
                both_end_cnt++;
        }
        else if(s.at(0) == 'B') {
            b_left_end_cnt++;
        }
        else if(s.back() == 'A') {
            a_right_end_cnt++;
        }
    }

    if(b_left_end_cnt == 0 && a_right_end_cnt == 0) {
        cout << contain_cnt + min(both_end_cnt -1, 0);
    }else {
        cout << contain_cnt + both_end_cnt + min(b_left_end_cnt, a_right_end_cnt) << endl; 
    }

}