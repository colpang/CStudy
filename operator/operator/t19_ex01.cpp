#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int score;
	scanf("%d",&score);
	
	if (score > 89)
		printf("A\n");
	else if (score > 79)
		printf("B\n");
	else if (score >69 )
		printf("C\n");
	else if (score > 59)
		printf("D\n");
	else
		printf("E\n");
}