#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	
	do {
		printf("0을 입력해주세요.\n");
		scanf("%d", &n);
	} while (n != 0);
	printf("입력완료.\n");
}