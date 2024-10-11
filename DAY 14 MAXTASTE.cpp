#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d; // Tastiness of four ingredients
        
        // Calculate the maximum possible tastiness
        int max_tastiness = max(a, b) + max(c, d);
        
        // Output the result for the current test case
        cout << max_tastiness << endl;
    }
    
    return 0;
}