#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long N;
        cin >> N;
        
        // Calculate number of groups of 5
        long long groups = N / 5;
        
        // Calculate remaining gifts after forming groups
        long long remaining_gifts = N % 5;
        
        // Calculate the total coins required
        long long coins_required = groups * 4 + remaining_gifts;
        
        cout << coins_required << endl;
    }
    return 0;
}