
#include <stdio.h>

// Function to calculate the GCD of two numbers using Euclid's algorithm
int calculateGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return calculateGCD(b, a % b);
}

// Function to calculate the LCM of two numbers
int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    // LCM of two numbers = (product of the numbers) / (GCD of the numbers)
    return (a * b) / gcd;
}

// Function to calculate the LCM of an array of numbers
int calculateMultipleLCM(int numbers[], int count) {
    int lcm = numbers[0]; // Initialize LCM with the first number

    for (int i = 1; i < count; i++) {
        lcm = calculateLCM(lcm, numbers[i]);
    }

    return lcm;
}

// Program interface
int main() {
    int count;
    printf("Enter the number of integers: ");
    scanf("%d", &count);

    int numbers[count];
    printf("Enter the integers separated by space: ");
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }

    int lcm = calculateMultipleLCM(numbers, count);
    printf("Least Common Multiple: %d\n", lcm);

    return 0;
}
