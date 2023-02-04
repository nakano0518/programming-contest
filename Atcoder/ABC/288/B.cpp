#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
    vector<string> names(K);
	for(int i = 0; i < K; i++) {
        cin >> names.at(i);
    }
    for(int i = 0; i < K-1; i++) {
        for(int j = i + 1; j < K; j++) {
            int L = names.at(i).size() > names.at(j).size() ? names.at(j).size(): names.at(i).size();
            for(int k = 0; k < L; k++) {
                if(names.at(i).at(k) != names.at(j).at(k)) {
                    if(names.at(i).at(k) > names.at(j).at(k)) {
                        string tmp = names.at(i);
                        names.at(i) = names.at(j);
                        names.at(j) = tmp;
                    }
                    break;
                }
                else{
                    if(k == L - 1) {
                        if(names.at(i).size() > names.at(j).size()) {
                            string tmp = names.at(i);
                            names.at(i) = names.at(j);
                            names.at(j) = tmp;
                        }
                    }
                }
            }
        }
    }
    for(int i = 0; i < K; i++) {
        cout << names.at(i) << endl;
    }
}
