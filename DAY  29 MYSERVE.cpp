#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases
    while (T--) {
        int P, Q;
        cin >> P >> Q; // Read the scores of Alice and Bob
        int serves = P + Q; // Total serves made
        int turns = serves / 2; // Number of complete turns
        if (turns % 2 == 0) {
            cout << "Alice" << endl; // Alice's turn to serve
        } else {
            cout << "Bob" << endl; // Bob's turn to serve
        }
    }
    return 0;
}