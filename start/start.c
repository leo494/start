#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%0.11f\n", (float)a / b);
	return 0;
}