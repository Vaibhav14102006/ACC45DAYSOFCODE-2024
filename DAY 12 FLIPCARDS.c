#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X); // Read N and X for each test case
        int face_down = N - X; // Calculate the number of face-down cards
        int min_flips = (X < face_down) ? X : face_down; // Find the minimum
        printf("%d\n", min_flips); // Output the result
    }
    return 0;
}