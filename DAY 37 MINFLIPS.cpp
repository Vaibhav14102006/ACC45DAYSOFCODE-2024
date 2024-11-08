#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        int count1 = 0, countMinus1 = 0;
        
        for (int i = 0; i < N; i++) {
            cin >> A[i];
            if (A[i] == 1) count1++;
            else countMinus1++;
        }
        
        if (N % 2 != 0) {
            cout << -1 << endl;
        } else {
            int operations = abs(count1 - countMinus1) / 2;
            cout << operations << endl;
        }
    }
    
    return 0;
}