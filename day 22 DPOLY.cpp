#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> coefficients(N);
        for (int i = 0; i < N; ++i) {
            cin >> coefficients[i];
        }

        // Find the degree of the polynomial
        int degree = 0;
        for (int i = 0; i < N; ++i) {
            if (coefficients[i] != 0) {
                degree = i;
            }
        }

        cout << degree << endl;
    }
    return 0;
}
