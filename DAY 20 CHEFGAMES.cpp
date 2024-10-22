#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // number of test cases
    cin >> T;
    while (T--) {
        int R1, R2, R3, R4; // decisions of the referees
        cin >> R1 >> R2 >> R3 >> R4;
        
        // Check if all referees say the ball is IN (i.e., all are 0)
        if (R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0) {
            cout << "IN" << endl;
        } else {
            cout << "OUT" << endl;
        }
    }
    return 0;
}