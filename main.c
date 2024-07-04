#include <stdio.h>

// Функція для обчислення НСД двох чисел за алгоритмом Евкліда
int calculateGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return calculateGCD(b, a % b);
}

// Функція для обчислення НСК двох чисел
int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    // НСК для двох чисел = (добуток чисел) / (НСД чисел)
    return (a * b) / gcd;
}

// Функція для обчислення НСК множини чисел
int calculateMultipleLCM(int numbers[], int count) {
    int lcm = numbers[0]; // Ініціалізуємо змінну НСК значенням першого числа

    for (int i = 1; i < count; i++) {
        lcm = calculateLCM(lcm, numbers[i]);
    }

    return lcm;
}
// Інтерфейс програми
int main() {
    int count;
    printf("Введіть кількість чисел: ");
    scanf("%d", &count);

    int numbers[count];
    printf("Введіть числа, розділені пробілом: ");
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }

    int lcm = calculateMultipleLCM(numbers, count);
    printf("Найменше спільне кратне: %d\n", lcm);

    return 0;
}
