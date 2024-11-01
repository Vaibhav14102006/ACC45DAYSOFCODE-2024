#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Number of test cases
    while (T--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D; // Read the current and desired scores

        // Check if it's possible for the score to change from A:B to C:D
        if (C >= A && D >= B) {
            cout << "POSSIBLE" << endl;
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    return 0;
}