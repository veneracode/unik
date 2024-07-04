#include <stdio.h>

int main() {
    int n;
    int count = 0; // Counter for equal divisors

    // Input and scanning of the input data
    printf("Enter a natural number n: ");
    scanf("%d", &n);

    // Checking input validity
    if (n <= 1 || n >= 150) {
        printf("Incorrect input. Please enter a natural number n (1 < n < 150).\n");
        return 0;
    }

    // Iterate through all possible values of m from 1 to n
    for (int m = 1; m <= n; m++) {
        // Check condition n % m == n / m
        if (n % m == n / m) {
            count++; // Found an equal divisor, increment the counter
        }
    }

    printf("Number of equal divisors of %d: %d\n", n, count);

    return 0;
}
