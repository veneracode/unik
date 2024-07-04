#include <stdio.h>

const int MOD = 12345;

int countSequences(int n) {
    int dp[n + 1]; // Array to store the number of valid sequences

    // Base cases
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 3;
    dp[3] = 7;
    dp[4] = 13;

    // Calculate the number of valid sequences for lengths > 4
    for (int i = 5; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }

    return dp[n];
}

int main() {
    int n;
    printf("Enter the length of the sequence n: ");
    scanf("%d", &n);

    // Validate input
    if (n < 1 || n >= 10000) {
        printf("Invalid value for sequence length n.\n");
        return 0;
    }

    // Calculate and print the number of valid sequences
    int result = countSequences(n);
    printf("Number of valid sequences: %d\n", result);

    return 0;
}
