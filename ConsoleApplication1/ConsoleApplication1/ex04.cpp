#include <stdio.h>
int main() {
	int a;	//����

	a = 3;	//�ʱ�ȭ(����)
	printf("%d\n", a);

	a = 5;
	printf("%d\n", a);

	int b = 2;
	int c = 3;
	//���� �̸� : ���ĺ� ��ҹ���,_, ����(ù���� ���� ����)

	int sum = a + b;
	printf("%d + %d = %d\n", a,b,sum);
}