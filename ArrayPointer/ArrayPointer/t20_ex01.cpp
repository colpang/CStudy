#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[5];		//5ĭ�� �迭 ����
	for (int i = 0; i < 5; i++) {
		a[i] = i * 5;
		printf("%d\n", a[i]);
	}
}