#include <iostream>
using namespace std;

int calc_sum_digits(int n) {
    int sum_digit = 0;
    while(n > 0) {
        sum_digit += n % 10;
        n /= 10;
    }
    return sum_digit;
}

int main() {
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    for(int i = 1; i < n; i++) {
        int sum_digit = calc_sum_digits(i);
        if(sum_digit >= a && sum_digit <= b) {
            ans += i;
        }
    }
    cout << ans << endl;
}