#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char a;
	printf("���ĺ��� �Է��ϼ���(Z����):");
	scanf("%c",&a);

	char b = a + 1;
	printf("%c�� ���� ���ĺ��� %c�Դϴ�.\n", a,b);
}