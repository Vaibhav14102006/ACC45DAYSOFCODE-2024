#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<string> contests(N);
        for (int i = 0; i < N; ++i) {
            cin >> contests[i];
        }

        int count_start38 = 0;
        int count_ltime108 = 0;
        for (const string& contest_code : contests) {
            if (contest_code == "START38") {
                count_start38++;
            } else if (contest_code == "LTIME108") {
                count_ltime108++;
            }
        }

        cout << count_start38 << " " << count_ltime108 << endl;
    }
    return 0;
}