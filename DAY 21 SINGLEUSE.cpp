#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;
        
        // Use the special attack
        int remainingHealth = H - Y;
        
        int attacks = 1; // One special attack

        // Check if remaining health is greater than zero
        if (remainingHealth > 0) {
            // Calculate the number of normal attacks needed
            attacks += (remainingHealth + X - 1) / X; // Ceiling of division
        }

        cout << attacks << endl;
    }
    return 0;
}