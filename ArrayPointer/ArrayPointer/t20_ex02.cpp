#include <stdio.h>

int main() {
	int arr[] = { 3,1,4,1,5 };
	sizeof(arr);	//size를 반환하는 함수
	for (int i = 0; i < 5; i++) {
		printf("%d\n", arr[i]);
	}
}