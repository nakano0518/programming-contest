#include <iostream>
using namespace std;

int main() {
    int n , y;
    cin >> n >> y;

    int a_ans, b_ans, c_ans = -1;

    for(int a = 0; a <= n; a++) {
        for(int b = 0; b <= n; b++) {
            int c = n - a - b;
            if(c < 0) continue;
            if(10000 * a + 5000 * b + 1000 * c == y) {
                a_ans = a;
                b_ans = b;
                c_ans = c;
            }
        }
    }

    cout << a_ans << " " << b_ans << " " << c_ans << endl;
}