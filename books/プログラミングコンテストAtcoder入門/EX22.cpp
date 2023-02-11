#include <iostream>
#include <vector>
using namespace std;

int n, m, q;
vector<long long> a, b, c, d;

long long calc_score(const vector<int>& A) {
    long long score = 0;
    for(int qi = 0; qi < q; qi++) {
        if(A.at(b.at(qi)) - A.at(a.at(qi)) == c.at(qi)) {
            score += d.at(qi);
        }
    }
    return score;
}

long long rec(vector<int>& A) {
    if(A.size() == n) {
        return calc_score(A);
    }
    long long ans = 0;
    int prev_last = A.empty() ? 1 : A.back();
    for(int add = prev_last; add <= m; add++) {
        A.push_back(add);
        ans = max(ans, rec(A));
        A.pop_back();
    }
    return ans;
}


int main() {
    cin >> n >> m >> q;
    a.resize(q);//配列aの要素数をqでリサイズ
    b.resize(q);
    c.resize(q);
    d.resize(q);
    for(int qi = 0; qi < q; qi++) {
        cin >> a.at(qi) >> b.at(qi) >> c.at(qi) >> d.at(qi);
        a.at(qi)--;b.at(qi)--;
    }
    vector<int> A;
    cout << rec(A) << endl;
}



/* 
//0,1からなる長さNの数列Aの列挙
#include <iostream>
#include <vector>
using namespace std;

int N = 3;

void print(const vector<int>& A) {
  cout << "[";
  for(int i = 0; i < A.size(); i++) {
  	if(i > 0) {
    	cout << ", ";
    }
    cout << A[i];
  }
  cout << "]" << endl;;
}

void rec(vector<int>& A) {
  if(A.size() == N) {
      print(A);
      return;
  }
  for(int v = 0; v < 2; v++) {
      A.push_back(v);
      rec(A);
      A.pop_back();
  }
}

int main() {
    vector<int> A;
    rec(A);
}
*/