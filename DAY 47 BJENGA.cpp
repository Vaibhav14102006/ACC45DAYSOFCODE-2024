#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // number of test cases
    cin >> T; 
    while (T--) {
        int N, X; // N is the number of people, X is the number of tiles
        cin >> N >> X;
        
        // Check if X is divisible by N
        if (X % N == 0) {
            cout << "YES" << endl; // Valid game
        } else {
            cout << "NO" << endl; // Invalid game
        }
    }
    return 0;
}