#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto& ai: a) {
        cin >> ai;
    }
    int minimum = *min_element(a.begin(), a.end());
    int maximum = *max_element(a.begin(), a.end());
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    // 第三引数は0ではなく0LL。0であればintで認識されオーバーフローでWAだった。
   

    cout << minimum << " " << maximum << " " << sum << endl;

    // C++の標準ライブラリ使いこなせてたほうがいい
    // https://zenn.dev/reputeless/books/standard-cpp-for-competitive-programming

}