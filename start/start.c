#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;//a는 시간, b는 분, c는 추가시간(단위: 분)
    int a_minute;//시간을 분으로 바꾼 값
    int tmp;//총 분
    scanf("%d %d", &a, &b);//시간, 분 입력
    scanf("%d", &c);//추가시간
    a_minute = a * 60;
    tmp = a_minute + b;
    tmp = tmp+c;
    if (tmp > 1439)//총 시간이 24:00넘기면
        tmp = tmp-1440;
    a = tmp / 60;
    b = tmp % 60;
    printf("%d %d", a, b);
    return 0;
}