#include <stdio.h>
#include <math.h>

int min_steps(int x, int y) {
    int steps = 0;
    int distance = y - x;

    steps += 2; // Перший і останній кроки

    distance -= 2;

    int k = 1;
    while (distance > 0) {
        steps++;
        distance -= 2 * k;
        k++;
    }

    return steps;
}

int main() {
    int x = 45;
    int y = 51;

    int result = min_steps(x, y);
    printf("Мінімальна кількість кроків від %d до %d: %d\n", x, y, result);

    return 0;
}
