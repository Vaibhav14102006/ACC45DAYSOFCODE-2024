#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
	    int A, B, K;
	    cin >> A >> B >> K;
	    
	    int d = abs(A - B);
	    int steps = (d + K - 1) / K; // This is equivalent to ceil(d / K)
	    
	    cout << steps << endl;
	}
	return 0;
}