#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    int maxLead = 0;
    int winner = 0;
    int cumulativeScore1 = 0, cumulativeScore2 = 0;
    
    for (int i = 0; i < N; ++i) {
        int Si, Ti;
        cin >> Si >> Ti;
        
        cumulativeScore1 += Si;
        cumulativeScore2 += Ti;
        
        int currentLead = abs(cumulativeScore1 - cumulativeScore2);
        int currentLeader = (cumulativeScore1 > cumulativeScore2) ? 1 : 2;
        
        if (currentLead > maxLead) {
            maxLead = currentLead;
            winner = currentLeader;
        }
    }
    
    cout << winner << " " << maxLead << endl;
    
    return 0;
}