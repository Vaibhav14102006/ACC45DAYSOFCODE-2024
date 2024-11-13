#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int A, B, C; // Prices of the items
        cin >> A >> B >> C;
        
        // Find the sum of the two highest prices
        int totalCost = A + B + C - min(A, min(B, C));
        
        cout << totalCost << endl;
    }

    return 0;
}