#include <iostream>
#include <vector>
using namespace std;

bool is_all_even(vector<int> &vec) {
    bool flg = true;
    int i = 0;
    while(flg) {
        if(vec.at(i) % 2 != 0) {
            flg = false;
        }
        i++;
        if(i == vec.size() - 1) {
            break;
        }
    }
    return flg;
}

void devide_by_two(vector<int> &vec) {
    for(int i = 0; i < vec.size(); i++) {
        vec.at(i) /= 2;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i = 0; i < n; i++) {
        cin >> a.at(i);
    }
    bool flg = is_all_even(a);
    int cnt = 0;
    while(flg) {
        devide_by_two(a);
        cnt++;
        flg =  is_all_even(a);
    }
    cout << cnt << endl;    
}