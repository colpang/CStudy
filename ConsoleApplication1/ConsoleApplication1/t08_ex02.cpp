#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char a;

	printf("문자 입력:");
	scanf("%c", &a);

	printf("%c의 ASCII값 : %d\n",a,a);

	int n;
	printf("숫자 입력:");
	scanf("%d", &n);

	printf("%d의 ASCII문자 : %c\n", n, n);
}