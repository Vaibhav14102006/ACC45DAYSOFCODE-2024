#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b;
    cin >> t;
    while (t-- > 0) {
        cin >> a >> b;
        if (a % 6 == 0) {
            cout << (a / 6) * b << endl;
        } else {
            cout << ((a / 6) + 1) * b << endl;
        }
    }
    return 0;
}
