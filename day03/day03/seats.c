#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int customerNum; //���尴 ��
	int columnNum; //���� ��
	int rowNum; //���� ��(�ټ�)
	int i, j, num;

	printf("���尴 �� �Է� : ");
	scanf_s("%d", &customerNum);

	printf("�¼� ���� �� �Է� : ");
	scanf_s("%d", &columnNum);

	//������ �������� ��� �� ���� ��
	//������ �������� �ʴ� ��� �� +1
	//if ~ else
	
	if (customerNum % columnNum == 0) {
		rowNum = customerNum / columnNum;
	}
	else  { //custumerNum % columnNum != 0
		rowNum = customerNum / columnNum +1;
	}
	//printf("%d���� ���� �ʿ��մϴ�.\n", rowNum);
	for (i = 0; i < rowNum; i++) {
		for (j = 1; j < columnNum + 1; j++) {
			num = i * columnNum + j;
			printf("%4d", num);

			if (num == customerNum) 
				break;	
		}
		printf("\n");
	}
	return 0;
}