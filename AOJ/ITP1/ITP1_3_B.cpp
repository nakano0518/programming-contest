#include <iostream>
using namespace std;

int main() {
	int i = 1; 
    int x;
	cin >> x;
    
	while (x != 0) {
		cout << "Case " << i << ": " << x << endl;
		cin >> x;
        i++;
	}
}