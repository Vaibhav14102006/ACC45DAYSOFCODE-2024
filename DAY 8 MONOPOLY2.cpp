#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // number of test cases
    cin >> T;
    
    while (T--) {
        int P, Q, R, S; // profits of companies A, B, C, D
        cin >> P >> Q >> R >> S;
        
        // Calculate the total profit
        int total = P + Q + R + S;
        
        // Check for monopoly condition
        if (2 * max({P, Q, R, S}) > total) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
