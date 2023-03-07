#include <iostream>
#include <climits>
using namespace std;
typedef long long ll; const int inf = INT_MAX / 2; const ll infl = 1LL << 60;

//場合分けで解こうとすると場合分けが複雑になった。
//場合の抜け漏れでWAになってしまい。解けず。
//↓
//どのように解けばいいのか、答えの方針だけ見てヒントにして解いた。
//(方針)
// 1. 300点なので簡単に解く方針を探す
// 2. 何か全探索で買うのを考えると良さそうな所はないか
// 3. ABピザを全探索すると良さそう


//(メモ)
//場合分けが複雑になりそうなら、
//一つのパラメータを全ての場合について動かしてみて(全探索)
//それに対して題意を満たすように解答を出せばいい
//ということを学んだ。

int main() {
	int A, B ,C, X, Y;
    cin >> A >> B >> C >> X >> Y;
    ll ans = infl;
    for(int AB_cnt = 0; AB_cnt <= 201000; AB_cnt++) {
        ll AB_amount = C * AB_cnt;
        ll A_cnt = X - AB_cnt / 2;
        ll B_cnt = Y - AB_cnt / 2;
        ll tmp_ans = AB_amount;
        if(A_cnt > 0) tmp_ans += (A * A_cnt);
        if(B_cnt > 0) tmp_ans += (B * B_cnt);
        ans = min(ans, tmp_ans);
    }
    cout << ans << endl;
    
}