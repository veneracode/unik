#include <stdio.h>

int main() {
    int t1, t2, t3;
    float totalTime, finalTime;
    // ������� ����� ���
    printf("������ ��� �������� : ");
    scanf("%d %d %d", &t1, &t2, &t3);

    // ���������� ��� � �������
    totalTime = (t1+t2+t3)/3.0;
    // ���������� ������� ��� (���, ���������� ��� �'������ ������)
    finalTime = totalTime / 3.0;
    // �������� ��������� � ����������� �� 2 ����� ���� ����
    printf("���, ���������� ��� �'������ ������: %0.2f �����", finalTime);
    return 0;
}
