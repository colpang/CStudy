#include <stdio.h>

int main() {
	/*
	// int :32비트(4바이트), 정수를 담는데 쓰임
	int a = 5;
	int b = 3;
	
	int add = a + b;
	int sub = a - b;
	int mul = a * b;
	int div = a / b;
	int mod = a % b;

	printf("%d + %d = %d\n", a, b, add);
	printf("%d - %d = %d\n", a, b, sub);
	printf("%d * %d = %d\n", a, b, mul);
	printf("%d / %d = %d\n", a, b, div);
	printf("%d %% %d = %d\n", a, b, mod);
	*/

	//double : 32비트(4바이트), 실수를 담는 데 쓰임
	//double : 64비트(8바이트), 실수를 담는 데 쓰임
	double a = 5;
	double b = 3;

	double add = a + b;
	double sub = a - b;
	double mul = a * b;
	double div = a / b;

	printf("%f + %f = %f\n", a, b, add);
	printf("%f - %f = %f\n", a, b, sub);
	printf("%f * %f = %f\n", a, b, mul);
	printf("%f / %f = %f\n", a, b, div);

	//부동 소수점(floating point)

}