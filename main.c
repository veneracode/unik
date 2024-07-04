#include <stdio.h>

// ������� ��� ���������� ��� ���� ����� �� ���������� ������
int calculateGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return calculateGCD(b, a % b);
}

// ������� ��� ���������� ��� ���� �����
int calculateLCM(int a, int b) {
    int gcd = calculateGCD(a, b);
    // ��� ��� ���� ����� = (������� �����) / (��� �����)
    return (a * b) / gcd;
}

// ������� ��� ���������� ��� ������� �����
int calculateMultipleLCM(int numbers[], int count) {
    int lcm = numbers[0]; // ���������� ����� ��� ��������� ������� �����

    for (int i = 1; i < count; i++) {
        lcm = calculateLCM(lcm, numbers[i]);
    }

    return lcm;
}
// ��������� ��������
int main() {
    int count;
    printf("������ ������� �����: ");
    scanf("%d", &count);

    int numbers[count];
    printf("������ �����, ������� �������: ");
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }

    int lcm = calculateMultipleLCM(numbers, count);
    printf("�������� ������ ������: %d\n", lcm);

    return 0;
}
