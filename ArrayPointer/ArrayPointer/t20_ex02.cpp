#include <stdio.h>

int main() {
	int arr[] = { 3,1,4,1,5 };
	sizeof(arr);	//size�� ��ȯ�ϴ� �Լ�
	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}
}