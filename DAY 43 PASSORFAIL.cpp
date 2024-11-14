#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases
    
    while (T--) {
        int N, X, P;
        cin >> N >> X >> P; // Read N, X, P for each test case
        
        // Calculate Chef's total marks
        int marks = 3 * X - (N - X);
        
        // Check if Chef passes or fails
        if (marks >= P) {
            cout << "PASS" << endl;
        } else {
            cout << "FAIL" << endl;
        }
    }
    
    return 0;
}
