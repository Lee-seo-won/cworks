#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//�ݺ��� - for��
	int n;
	int total = 0; //�հ�
	for (n = 1; n <= 10; n++) { //�ʱⰪ; ���ǰ�; ������;
		total += n;
		//printf("%4d", n); //%4d���� ���ڴ� ����

	}
	printf("�հ� : %d", total);
	return 0;
}
