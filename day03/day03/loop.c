#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//1���� n���� ��� - ���ѹݺ���(�ݺ����ǹ�)
	//while ~ if ~ break��
	//1���� ������ �� �� ���� 100�� �Ѵ� �ڿ���
	int n = 0;
	int sum = 0;
	while (1) {
		n++;
		sum += n;
		printf("n = %d,sum = %d\n", n, sum);
		if (sum > 100) //���๮�� ������ ��� {} ��������
			break;  //�����϶��� �߰�ȣ {} ��� ��.
	}
	printf("��� n= %d, sum = %d",n, sum);
	return 0;
}
