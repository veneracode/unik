#include <stdio.h>
#include <math.h>

int main() {
    int p;
    printf("Enter the number of digits p (p ≤ 30): ");
    scanf("%d", &p);

    // Checking input validity
    if (p < 1 || p > 30) {
        printf("Invalid value for p. Please enter an integer within the range [1, 30].\n");
        return 1;  // Return non-zero error code
    }

    // Calculate the total number of p-digit numbers
    int totalNumbers = pow(2, p) - (p - 2);
    printf("Number of %d-digit numbers: %d\n", p, totalNumbers);

    return 0;
}
