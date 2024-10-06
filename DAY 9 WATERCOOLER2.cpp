#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases
    while (T--) {
        int X, Y;
        cin >> X >> Y; // Read the rent cost and purchase cost
        int max_months = (Y - 1) / X; // Calculate the maximum number of months
        cout << max_months << endl; // Output the result
    }
    return 0;
}