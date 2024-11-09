#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T; // number of test cases
    cin >> T;
    
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;
        
        // Calculate the number of rounds
        int k = log2(N);
        
        // Calculate the total time
        int total_time = k * A + (k - 1) * B;
        
        // Output the result
        cout << total_time << "\n";
    }
    
    return 0;
}