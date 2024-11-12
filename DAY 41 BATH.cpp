#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    while (T--) {
        int X, Y; // X is the capacity of the geyser and Y is the capacity of the bucket
        cin >> X >> Y;
        
        // Calculate the number of people who can take a bath
        int max_people = X / (2 * Y);
        
        // Output the result
        cout << max_people << endl;
    }
    return 0;
}