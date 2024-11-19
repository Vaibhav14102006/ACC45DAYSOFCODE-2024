#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z;

        int freeMemory = S - (X + Y);

        if (Z <= freeMemory) {
            cout << "0" << endl;
        } else {
            int additionalMemory = Z - freeMemory;

            if (additionalMemory <= max(X, Y)) {
                cout << "1" << endl;
            } else {
                cout << "2" << endl;
            }
        }
    }
    return 0;
}