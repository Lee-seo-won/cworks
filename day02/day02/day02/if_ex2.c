#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	//if - else if - else
	//���̰��� ����� ��� - �����оƵ�, �ʵ��л�, ��.����л�, �Ϲ���
	int age = 25;
	int charge = 0;
		//���̺��� ���� ó��
	if (age < 8) {
		charge = 1000;
		printf("������ �Ƶ��Դϴ�.\n");
			} 
	else if (age < 14) {
		charge = 2000;
		printf("�ʵ��л��Դϴ�.\n");
			}
	else if (age < 20) {
		charge = 2500;
		printf("��.����л��Դϴ�.\n");
			}
	else {  //age >= 20 ����
		charge = 3000;
		printf("�Ϲ����Դϴ�.\n");
		}
	printf("������ %d���Դϴ�.\n", charge);



	return 0;
}