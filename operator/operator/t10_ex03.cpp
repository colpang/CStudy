#include <stdio.h>
int main() {
	int a = 10;
	int b;
	
	printf("��ġ ���� ����\n");
	//��ġ : ���� �� ����
	b = ++a;
	printf("a:%d , b:%d\n",a,b);

	a = 10;
	printf("��ġ ���� ����\n");
	//��ġ : ���� �� ����
	b = a--;
	printf("a:%d , b:%d\n", a, b);
}