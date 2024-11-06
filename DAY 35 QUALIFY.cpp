#include <bits/stdc++.h>
using namespace std;

int main() {
    // Read the number of test cases
    int T;
    cin >> T;
    
    while (T--) {
        // Read the qualifying score X, number of easy problems A, and hard problems B
        int X, A, B;
        cin >> X >> A >> B;
        
        // Calculate the total points scored by Chef
        int totalScore = A + 2 * B;
        
        // Check if Chef qualifies
        if (totalScore >= X) {
            cout << "Qualify" << endl;
        } else {
            cout << "NotQualify" << endl;
        }
    }
    
    return 0;

}
