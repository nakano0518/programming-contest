#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int m = a * b;
    if(m % 2 == 0) {
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }
    return 0;
}