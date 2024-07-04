#include <stdio.h>
#include <math.h>

// Function to calculate the length of a vector given its coordinates
double calculateVectorLength(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1; // Difference in x coordinates
    int dy = y2 - y1; // Difference in y coordinates
    double length = sqrt(dx * dx + dy * dy); // Calculate square root of (dx^2 + dy^2) to get the length
    return length; // Return the calculated length of the vector
}

int main() {
    int x1, y1, x2, y2;

    // Prompt user for input
    printf("Enter the coordinates of the starting point (x1 y1) and ending point (x2 y2) of the vector: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    // Calculate the length of the vector
    double length = calculateVectorLength(x1, y1, x2, y2);

    // Output the result
    printf("The length of the vector is: %.6f\n", length);

    return 0;
}
