#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char a;
	printf("알파벳을 입력하세요(Z제외):");
	scanf("%c",&a);

	char b = a + 1;
	printf("%c의 다음 알파벳은 %c입니다.\n", a,b);
}