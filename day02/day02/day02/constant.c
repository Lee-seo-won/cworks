#include <stdio.h>

int main() {
	//��� - const
	int min_num = 1;
	const int MAX_NUM = 100;
	const float PI = 3.1415; //��� PI�� ���� + PI�� 3.1415�� ������
	int radius = 5; //���� radius�� 5�� ����
	float area; // ������ area ����

	min_num = 10;
	//max_num = 1000; �����Ҽ� �ִ� lvalue(left_value)�� �ƴ� - const�� �پ ����� ������ �ȵ�.
	//���������� ����� �빮��, ������ �ҹ���
	printf("%d\n", min_num);
	printf("%d\n", MAX_NUM);

	//���� ���� ����ϱ� : PI * r * r

	area = PI * radius * radius;
	printf("���� ���� : %.2f\n", area);


	return 0;
}