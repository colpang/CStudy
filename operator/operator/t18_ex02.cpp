#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//continue 
int main() {

	int n;
	scanf("%d", &n);
	
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 3 == 0)
			continue;
		sum += i;
	}
	printf("%d\n", sum);
}