#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);

	for (int i = 1; i <= n; i*=2)
		printf("%d\n",i);

	//중괄호 안의 변수는 지역변수로 중괄호(코드블럭)을 나오면 할당 해제 됨
}