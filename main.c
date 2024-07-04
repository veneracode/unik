#include <stdio.h>

int main() {
    int t1, t2, t3;
    float totalTime, finalTime;
    // Зчитуємо вхідні дані
    printf("Введіть три значення : ");
    scanf("%d %d %d", &t1, &t2, &t3);

    // Обчислюємо час в годинах
    totalTime = (t1+t2+t3)/3.0;
    // Обчислюємо кінцевий час (час, необхідний для з'їдання пирога)
    finalTime = totalTime / 3.0;
    // Виводимо результат з округленням до 2 знаків після коми
    printf("Час, необхідний для з'їдання пирога: %0.2f годин", finalTime);
    return 0;
}
