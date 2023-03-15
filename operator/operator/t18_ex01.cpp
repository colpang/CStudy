#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//break : 반복문 한 개를 빠져나온다.

int main() {
	for (int i = 1; ; i++) {
		int n;
		scanf("%d", &n);
		if (n == 0)
			break;
		printf("%d번째:%d\n", i, n);
	}
}