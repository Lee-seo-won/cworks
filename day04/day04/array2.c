#include <stdio.h>

int main() {
	int arr[] = { 10, 20, 30, 40 };
	int i;
	int sum = 0;
	//30�� ���
	printf("a[%d] = %d\n", 2, arr[2]);

	//��ü ���
	for (i = 0; i < 4; i++) {
		printf("%d\n", arr[i]);

	}
	//�հ�
	for (i = 0; i < 4; i++) {
		sum += arr[i];  //���� ���ϱ�
		printf("�հ� : %d\n", sum);

	}
	return 0;
}