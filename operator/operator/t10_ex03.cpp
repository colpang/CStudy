#include <stdio.h>
int main() {
	int a = 10;
	int b;
	
	printf("전치 증가 연산\n");
	//전치 : 연산 후 저장
	b = ++a;
	printf("a:%d , b:%d\n",a,b);

	a = 10;
	printf("후치 증가 연산\n");
	//후치 : 저장 후 연산
	b = a--;
	printf("a:%d , b:%d\n", a, b);
}