#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int A, B, C, D;
        cin >> A >> B >> C >> D; // Read the angles of the quadrilateral

        // Check if the sum of opposite angles is 180 degrees
        if (A + C == 180 || B + D == 180) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}