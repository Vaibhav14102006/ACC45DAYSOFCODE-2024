#include <bits/stdc++.h>
using namespace std;

int main ()  
{
	int t;
	cin >> t;
	while(t--)
	{
	    int X, Y;
	    cin >> X >> Y;

	    // Calculate scores for both strategies
	    // Strategy 1: Solve A first, then B
	    int scoreAB_A = max(0, 500 - 2 * X);      // Score for A
	    int scoreAB_B = max(0, 1000 - 4 * (X + Y)); // Score for B
	    int scoreAB = scoreAB_A + scoreAB_B;

	    // Strategy 2: Solve B first, then A
	    int scoreBA_B = max(0, 1000 - 4 * Y);      // Score for B
	    int scoreBA_A = max(0, 500 - 2 * (X + Y)); // Score for A
	    int scoreBA = scoreBA_B + scoreBA_A;

	    // Calculate the maximum score possible
	    int maxScore = max(scoreAB, scoreBA);

	    // Output the result
	    cout << maxScore << endl;
	}
	return 0;
}