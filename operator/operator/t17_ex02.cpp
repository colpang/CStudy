#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	/*int i = 0, t = 1;
	while (i <= n) {
		printf("2^%d = %d\n", i, t);
		i++;
		t *= 2;
	}*/

	//위를 for문으로 변경
	for (int i = 0, t=1; i <= n; i++) {
		printf("2^%d = %d", i, t);
		t *= 2;
	}
}