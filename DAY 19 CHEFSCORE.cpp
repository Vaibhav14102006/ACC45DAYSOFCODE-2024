#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  // Read the number of test cases
    while (T--) {
        int N, X, Y;
        cin >> N >> X >> Y;  // Read each test case's parameters
        
        // Check the two conditions:
        // 1. Y should be a multiple of X
        // 2. The quotient Y / X should be <= N, which is implicitly guaranteed by the constraints
        if (Y % X == 0 && Y / X <= N) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}