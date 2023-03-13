#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	

	// bool : 진리값 저장용 변수(1byte)
	bool p = a > b;
	bool q = a < b;
	bool r = a == b;
	printf("%d\n",p);
	printf("%d\n",q);
	printf("%d\n",r);
}