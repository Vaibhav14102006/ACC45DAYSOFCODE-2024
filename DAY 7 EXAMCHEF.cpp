#include <bits/stdc++.h>
using namespace std;

int main() {
    int T; // number of test cases
    cin >> T;
    while (T--) {
        int X, Y, Z;
        cin >> X >> Y >> Z; // read the values for each test case

        int totalStudents = X * Y; // total number of students in Chefland
        if (Z > totalStudents / 2) { // check if passed students are more than 50%
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
