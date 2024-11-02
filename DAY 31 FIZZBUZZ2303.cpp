#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    // Calculate the number of ways to choose captain and vice-captain
    int ans = n * (n - 1);
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t; // Read number of test cases
    while (t--) {
        solve(); // Solve each test case
    }
    return 0;
}
