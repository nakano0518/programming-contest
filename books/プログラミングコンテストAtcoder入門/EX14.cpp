#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<string> words;

    for(int i = 0; i < s.size();) {
        int j = i + 1;
        while(j < s.size() && islower(s.at(j))) {
            j++;
        }
        string word = s.substr(i, j + 1 - i);
        word.at(0) = tolower(word.at(0));
        word.at(word.size() - 1) = tolower(word.at(word.size() - 1)); //word.back()で要素末尾指定
        words.push_back(word);
        i = j + 1;
    }

    sort(words.begin(), words.end());

    string ans;
    for(auto word: words) {
        word.at(0) = toupper(word.at(0));
        word.at(word.size() - 1) = toupper(word.at(word.size() - 1));
        ans += word;
    }

    cout << ans << endl;
}