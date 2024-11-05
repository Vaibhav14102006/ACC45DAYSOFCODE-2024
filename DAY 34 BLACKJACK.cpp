#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases
    while (T--) {
        int A, B;
        cin >> A >> B; // Read the two numbers
        int C = 21 - (A + B); // Calculate the third number needed
        if (C >= 1 && C <= 10) {
            cout << C << endl; // If C is within the valid range, print it
        } else {
            cout << -1 << endl; // Otherwise, output -1
        }
    }
    return 0;
}