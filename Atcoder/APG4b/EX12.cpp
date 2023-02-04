#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
 
  int answer = 1;
  for(int i = 0; i < S.size(); i++) {
      if(S.at(i) == '+') {
          answer++;
      }
      if(S.at(i) == '-') {
          answer--;
      }
  }
  cout << answer << endl;
}
