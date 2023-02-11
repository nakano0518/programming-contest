#include <iostream>
#include <vector>
using namespace std;
int main() {
  int N, M;
  cin >> N >> M;
  vector<int> a(M);
  for (auto& x : a) cin >> x;
  vector<int> re(N + 1);
  for (auto& x : a) re[x] = 1; //与aをキー、値を1でフラグする。それ以外の要素は０。
  vector<int> ans;
  int cur = 1; //現在値
  for(int i = 1; i <= N; i = ++cur) { // 変数代入時の前置・後置演算は挙動の違いに注意。i = cur++;ではWA。
      while(re[cur]) cur++; //re[i]が1の間はcurを増やし続ける
      for(int k = cur; k >= i; k--) ans.push_back(k);
  }
  for (int i = 0; i < N; i++) cout << ans[i] << " \n"[i + 1 == N];

}