#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;  // Read the number of test cases
	while(T--) {
	    int X, Y;
	    cin >> X >> Y;  // Read time taken by Bike and Car
	    
	    if(X < Y) {
	        cout << "BIKE" << endl;  // Bike is faster
	    } else if(X > Y) {
	        cout << "CAR" << endl;   // Car is faster
	    } else {
	        cout << "SAME" << endl;  // Both take the same time
	    }
	}
	return 0;

}
