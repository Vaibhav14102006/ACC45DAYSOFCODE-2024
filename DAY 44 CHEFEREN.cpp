#include <iostream>
using namespace std;

int main() {
    int T; // Number of test cases
    cin >> T;
    
    while (T--) {
        int N, A, B;
        cin >> N >> A >> B;
        
        // Calculate the number of odd and even episodes
        int oddEpisodes = (N + 1) / 2; // This is equivalent to ceil(N / 2.0)
        int evenEpisodes = N / 2;
        
        // Calculate total duration
        int totalDuration = oddEpisodes * B + evenEpisodes * A;
        
        // Output the result
        cout << totalDuration << endl;
    }
    
    return 0;
}