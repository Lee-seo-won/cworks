#include <stdio.h>
#define PI 3.1415 //PI�� �̰ŷ� ���ڴ�. =�̳� ; ���� ��ȣ ������ ����. �ڷ����� ���� ����.
                   //��ũ�� ���(��ó��) - ó���ӵ� ����. �޸� ���� �� ���. Ŭ ���� const �ᵵ ��.
#define MIN_NUM 1
#define MAX_NUM 100

int main() {
	int r = 5; 
	float area;

	area = PI * r * r;

	printf("���� ���� : %.2f\n", area);

	//MIN_NUM = 10; ����̱� ������ �ٲ� �� ����.
	
	printf("�ִ밪 : %d\n", MAX_NUM);
	printf("�ּҰ� : %d\n", MIN_NUM);

	


	


	return 0;
}