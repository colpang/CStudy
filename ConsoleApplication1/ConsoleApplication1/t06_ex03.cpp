#include <stdio.h>

int main() {
	int math = 90, korean = 95, english = 96;
	int sum = math + korean + english;
	double avg = (double)sum / 3;

	printf("%.1f\n", avg);	//93.666667
}

// ���� / ���� = ����
// �Ǽ� / ���� = �Ǽ�
// �Ǽ� / �Ǽ� = �Ǽ�

// ���� + ���� = ����
// ���� + �Ǽ� = �Ǽ�
// �Ǽ� + �Ǽ� = �Ǽ�