#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0)
			printf("%d ",i);
	}
}