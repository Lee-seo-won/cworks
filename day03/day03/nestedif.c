#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    //���� if��
	//���� ���� 10�̻� ¦���� ���
	//���� ���� 10�̻� Ȧ���� ���
	//���� 10���� �۰� ¦���� ���
	//���� 10���� �۰� Ȧ���� ���
	//int num = 11;
	
	//if~else if ~else
	int num;
	printf("���� �Է��ϼ��� :");
	scanf_s("%d",&num);
	
	if (num >= 10 && num % 2 ==0) {
		printf("%d�� 10 �̻��� ¦��\n", num);
	}
	else if (num >= 10 && num % 2 != 0) {
		printf("%d�� 10 �̻��� Ȧ��\n", num);
	}
	else if (num < 10 && num % 2 == 0) {
		printf("%d�� 10���� ���� ¦��\n", num);
	}
	else {
		printf("%d�� 10���� ���� Ȧ��\n", num);
	}

	


	/*if (num >= 10) {
		if (num % 2 == 0) {
			printf("%d�� 10 �̻��� ¦��\n", num);
		}
		else {
			printf("%d�� 10 �̻��� Ȧ��\n", num);
		}
	}
	else {
		if (num % 2 == 0) {
			printf("%d�� 10���� ���� ¦��\n", num);
		}
		else {
			printf("%d�� 10���� ���� Ȧ��\n", num);
		}
	}*/


	return 0;
}