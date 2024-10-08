#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; 
    cin >> T;  // Read the number of test cases
    while (T--) {
        int X, Y;
        cin >> X >> Y;  // Read the initial positions of policeman and thief
        cout << abs(X - Y) << endl;  // Output the minimum time to catch the thief
    }
    return 0;
}
