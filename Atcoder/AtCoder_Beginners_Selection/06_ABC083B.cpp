#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;
    int sum = 0;
    for(int i = 1; i <= N; i++) {
        int digit_sum = 0;
        string i_str = to_string(i);
        for(int j = 0; j < i_str.size(); j++) {
            digit_sum += i_str[j] - '0';
        }
        if(digit_sum >= A && digit_sum <= B) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}