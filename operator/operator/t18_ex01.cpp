#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//break : �ݺ��� �� ���� �������´�.

int main() {
	for (int i = 1; ; i++) {
		int n;
		scanf("%d", &n);
		if (n == 0)
			break;
		printf("%d��°:%d\n", i, n);
	}
}