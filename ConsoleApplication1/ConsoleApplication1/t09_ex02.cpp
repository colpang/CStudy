#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float weight, height;
	float bmi;

	printf("몸무게를 입력하세요(kg):");
	scanf("%f",&weight);
	printf("키를 입력하세요(m):");
	scanf("%f",&height);

	bmi = weight / (height * height);
	printf("체질량지수 : %.2f\n",bmi);
}