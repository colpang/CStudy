
#include <iostream>
#include <stdio.h>

int main()
{
	//%d:정수 출력
	printf("%d + %d = %d\n", 2,3,5);
	//%f:실수 출력, %.2f와 같이 사용하면 소숫점 2번째 자리까지 반올림해서 출력 
	printf("%f\n", 3.14);
	printf("%2f\n", 3.141592);
	//%g:실수 출력(지수 형태로도 출력)
	printf("%g\n", 3.14592);
	printf("%.3g\n", 8723984712.12837468723);
	//%c:문자 출력(알파벳, 숫자, 몇몇 기호, \n)
	printf("%c %c %c \n",'a', 'b', 'c');
	//%s:문자열 출력
	printf("%s\n", "안녕하세요");
}

