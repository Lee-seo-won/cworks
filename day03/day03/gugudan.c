#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//������ �� �ܸ� ����ϱ�
	
	int dan;
	
	int i,j;


	/*printf("���� �Է��ϼ��� : ");
	scanf_s("%d", &dan);
	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", dan, i, (dan * i));
	}*/


	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}


	return 0;
}
