#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int choice;

	makeChoice:
	printf("�� ����: 1\n");
	printf("�ҷ�����: 2\n");
	printf("����: 3\n");
	printf("ũ����: 4\n");

	scanf("%d",&choice);

	switch (choice)	{
		case 1:
			printf("�� ����");
			break;
		case 2:
			printf("�ҷ�����");
			break;
		case 3:
			printf("����");
			break;
		case 4:
			printf("ũ����");
			break;
		default:
			printf("�߸��� �Է��Դϴ�.\n");
			//go to
			goto makeChoice;
	}
}