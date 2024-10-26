#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int N;
        cin >> N; // Read the number of spooky days

        // Calculate the count of Tuesdays
        int tuesdays = (N - 1 + 6) / 7;

        // Output the result
        cout << tuesdays << endl;
    }

    return 0;
}