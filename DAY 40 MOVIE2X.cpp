#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y; // Input the total duration of the movie and the duration watched at twice speed

    int total_time = (Y / 2) + (X - Y); // Calculate the total time spent

    cout << total_time << endl; // Output the total time
    return 0;
}
