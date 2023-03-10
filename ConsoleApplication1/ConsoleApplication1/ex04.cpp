#include <stdio.h>
int main() {
	int a;	//선언

	a = 3;	//초기화(대입)
	printf("%d\n", a);

	a = 5;
	printf("%d\n", a);

	int b = 2;
	int c = 3;
	//변수 이름 : 알파벳 대소문자,_, 숫자(첫번재 글자 제외)

	int sum = a + b;
	printf("%d + %d = %d\n", a,b,sum);
}