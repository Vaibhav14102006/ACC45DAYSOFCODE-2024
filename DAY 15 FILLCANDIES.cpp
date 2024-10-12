#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        int n, k, m;
        cin >> n >> k >> m; // Read the values of N, K, and M for each test case
        
        int maxCandiesPerBag = k * m; // Calculate the maximum number of candies per bag
        
        // Calculate the minimum number of bags required
        // We use integer division to get the full bags needed, and add 1 more if there's a remainder
        int minBags = (n + maxCandiesPerBag - 1) / maxCandiesPerBag;
        
        cout << minBags << endl; // Output the result for the current test case
    }
    return 0;
}
