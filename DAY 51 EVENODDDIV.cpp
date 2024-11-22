#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        // Logic to determine the relationship between f(N) and g(N)
        if (N % 4 == 0) {
            cout << 1 << endl; // f(N) > g(N)
        } else if (N % 2 == 0) {
            cout << 0 << endl; // f(N) = g(N)
        } else {
            cout << -1 << endl; // f(N) < g(N)
        }
    }

    return 0;
}