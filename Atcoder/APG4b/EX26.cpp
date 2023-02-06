#include <bits/stdc++.h>
using namespace std;

// 問題文の形式でvec値を出力
void print_vec(vector<int> vec) {
    cout << "[ ";
    for(int i = 0; i < vec.size(); i++) {
        cout << vec.at(i) << " ";
    }
    cout << "]" << endl;
}

// 変数名を読み取りイコールを読み飛ばす
string read_name() {
    string name, equal;
    cin >> name >> equal;
    return name;
}

// int式の項を1つ読み取る。
// 数字ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
int read_int(map<string, int> &var_int) {
    string val;
    cin >> val;
    return isdigit(val.at(0))
        ? stoi(val)
        : var_int.at(val);
}

// int式全体を読み取って計算する
// var_int : intの変数を保持するmap
int calc_int(map<string, int> &var_int) {
    string symbol = "";
    int result = 0;
 
    while (symbol != ";") {
        int val = read_int(var_int);
        if (symbol == "") {
        result = val;
        }
        if (symbol == "+") {
        result += val;
        }
        if (symbol == "-") {
        result -= val;
        }
        cin >> symbol;
    }
    return result;
}

// vec値を読み取る
// 最初の"["は読み取ってある前提であることに注意
// var_int : intの変数を保持するmap
vector<int> read_vec_val(map<string, int> &var_int) {
    vector<int> result; 
    string symbol = "";
 
    while (symbol != "]") {
        int val = read_int(var_int);
        result.push_back(val);
        cin >> symbol;
    }
    
    return result;
}

// vec式の項を1つ読み取る
// vec値ならその値を返し、そうでないなら変数として解釈し変数の値を返す
// var_int : intの変数を保持するmap
// var_vec : vecの変数を保持するmap
vector<int> read_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec) {
    string val;
    cin >> val;
 
    return val == "["
        ? read_vec_val(var_int)
        : var_vec.at(val);
}

// vec式全体を読み取って計算する
// var_int : intの変数を保持するmap
// var_vec : vecの変数を保持するmap
vector<int> calc_vec(map<string, int> &var_int, map<string, vector<int>> &var_vec) {
    string symbol;
    vector<int> result;
 
    while (symbol != ";") {
    
        vector<int> vec = read_vec(var_int, var_vec);
    
        if (symbol == "") {
        result = vec;
        }
        if (symbol == "+") {
            for (int i = 0; i < result.size(); i++) {
                result.at(i) += vec.at(i);
            }
        }
        if (symbol == "-") {
            for (int i = 0; i < result.size(); i++) {
                result.at(i) -= vec.at(i);
            }
        }
        cin >> symbol;
    }
    return result;
}


int main() {

  // 命令の行数を取得
  int N;
  cin >> N;

  map<string, int> var_int; // intの変数を管理するmap
  map<string, vector<int>> var_vec; // vectorの変数を管理するmap

  // 行数分の処理
  for (int i = 0; i < N; i++) {

    // 命令を受け取る
    string s;
    cin >> s;

    // int命令の処理
    if (s == "int") {
      // 変数名を読み取る
      string name = read_name();
      // 右辺の式を計算して変数に代入
      var_int[name] = calc_int(var_int);
    }

    // vec命令の処理
    if (s == "vec") {
      // 変数名を読み取る
      string name = read_name();
      // 右辺の式を計算して変数に代入
      var_vec[name] = calc_vec(var_int, var_vec);
    }

    // print_int命令の処理
    if (s == "print_int") {
      // 式を計算して出力
      cout << calc_int(var_int) << endl;
    }

    // print_vec命令の処理
    if (s == "print_vec") {
      // 式を計算して出力
      print_vec(calc_vec(var_int, var_vec));
    }
  }
}