#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	float a, b;
	scanf("%f%f", &a, &b); // &:∆˜¿Œ≈Õ

	/*float add = a + b;
	float sub = a - b;
	float mul = a * b;
	float div = a / b;*/
	//float mod = a % b;

	printf("%f + %f = %f\n", a, b, a+b);
	printf("%f - %f = %f\n", a, b, a-b);
	printf("%f * %f = %f\n", a, b, a*b);
	printf("%f / %f = %f\n", a, b, a/b);
	//printf("%f %% %f = %f\n", a, b, mod);
}