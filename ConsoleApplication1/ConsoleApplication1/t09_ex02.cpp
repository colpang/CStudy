#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	float weight, height;
	float bmi;

	printf("�����Ը� �Է��ϼ���(kg):");
	scanf("%f",&weight);
	printf("Ű�� �Է��ϼ���(m):");
	scanf("%f",&height);

	bmi = weight / (height * height);
	printf("ü�������� : %.2f\n",bmi);
}