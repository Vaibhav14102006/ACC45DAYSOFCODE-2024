#include <iostream>
using namespace std;

int main() {
    // Read the input number N
    int N;
    cin >> N;

    // Check if N is divisible by 4
    if (N % 4 == 0) {
        // Increment N by 1
        N = N + 1;
    } else {
        // Decrement N by 1
        N = N - 1;
    }

    // Output the result
    cout << N << endl;

    return 0;
}