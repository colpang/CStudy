#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char a;

	printf("���� �Է�:");
	scanf("%c", &a);

	printf("%c�� ASCII�� : %d\n",a,a);

	int n;
	printf("���� �Է�:");
	scanf("%d", &n);

	printf("%d�� ASCII���� : %c\n", n, n);
}