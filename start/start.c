#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;//a�� �ð�, b�� ��, c�� �߰��ð�(����: ��)
    int a_minute;//�ð��� ������ �ٲ� ��
    int tmp;//�� ��
    scanf("%d %d", &a, &b);//�ð�, �� �Է�
    scanf("%d", &c);//�߰��ð�
    a_minute = a * 60;
    tmp = a_minute + b;
    tmp = tmp+c;
    if (tmp > 1439)//�� �ð��� 24:00�ѱ��
        tmp = tmp-1440;
    a = tmp / 60;
    b = tmp % 60;
    printf("%d %d", a, b);
    return 0;
}