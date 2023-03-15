#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int choice;

	makeChoice:
	printf("새 게임: 1\n");
	printf("불러오기: 2\n");
	printf("설정: 3\n");
	printf("크레딧: 4\n");

	scanf("%d",&choice);

	switch (choice)	{
		case 1:
			printf("새 게임");
			break;
		case 2:
			printf("불러오기");
			break;
		case 3:
			printf("설정");
			break;
		case 4:
			printf("크레딧");
			break;
		default:
			printf("잘못된 입력입니다.\n");
			//go to
			goto makeChoice;
	}
}