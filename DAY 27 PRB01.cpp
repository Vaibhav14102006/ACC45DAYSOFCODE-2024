#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    
    // Create a boolean array "prime[100001]" and initialize
    // all entries as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[100001];
    memset(prime, true, sizeof(prime));
    prime[1] = false; // 1 is not prime
    
    for (int p = 2; p * p <= 100000; p++) {
        if (prime[p] == true) {
            for (int i = 2 * p; i <= 100000; i += p)
                prime[i] = false;
        }
    }

    while(t--) {
        cin >> n;
        if(prime[n])
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}