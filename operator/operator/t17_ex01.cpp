#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i = 1;
	//for 무한 loop
	//조건을 생략하면 true라고 간주함.
	for (; true; i++)
		printf("%d",i);
}