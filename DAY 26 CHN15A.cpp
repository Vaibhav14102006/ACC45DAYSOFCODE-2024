#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases
    while (T--) {
        int N, K;
        cin >> N >> K; // Read N and K for the current test case
        
        int wolverineCount = 0; // Initialize the counter for Wolverine-like minions
        
        for (int i = 0; i < N; ++i) {
            int a;
            cin >> a; // Read initial characteristic value for each minion
            
            // Check if the new characteristic value is divisible by 7
            if ((a + K) % 7 == 0) {
                wolverineCount++;
            }
        }
        
        cout << wolverineCount << endl; // Output the result for the current test case
    }

    return 0;
}