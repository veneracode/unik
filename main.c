#include <stdio.h>
#include <math.h>

// Function to find the number of intersection points between two circles
int findIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    // Calculate the distance between the centers of the circles
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Check the conditions for intersection
    if (distance > r1 + r2 || distance < fabs(r1 - r2))
        return 0; // Circles do not intersect
    else if (distance == 0 && r1 == r2)
        return -1; // Circles coincide
    else
        return 2; // Circles intersect at two points
}

int main() {
    int x1, y1, r1, x2, y2, r2;

    printf("Enter the coordinates and radii of two circles (x1 y1 r1) (x2 y2 r2): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int intersectionPoints = findIntersectionPoints(x1, y1, r1, x2, y2, r2);

    if (intersectionPoints == -1)
        printf("-1\n"); // Circles coincide
    else
        printf("Number of intersection points: %d\n", intersectionPoints); // Print the number of intersection points

    return 0;
}
