#include <stdio.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//���� ���� ���α׷�
	bool sw = true; //����ġ���� - ����, �ߴ��� ����
	int balance = 0; //�ܰ�
	while (sw) {
		int selNo;  // ���� ����
		int money; //����� ����
		printf("====================================\n");
		printf("1. ���� | 2. ��� | 3. �ܰ� | 4, ����\n");
		printf("====================================\n");
		printf("���� >");
		scanf_s("%d", &selNo);

		//���� ó��
		//���� 
		if (selNo == 1) {
			printf("���ݾ� >");
			scanf_s("%d", &money);
			balance += money;
			printf("�ܰ� : %d\n", balance);
		}
		else if (selNo == 2) {
			printf("��ݾ� >");
			scanf_s("%d", &money);
			//balance -= money; // �ܰ� ���̳ʽ��� ���� �ʵ��� (�ܾ��� �����մϴ�)
			/*while (money > balance) {
				printf("�ܾ��� �ʰ��߽��ϴ�. �ٽ� �Է����ּ���.\n");
				printf("��ݾ� >");
				scanf_s("%d", &money);
			}*/
			while (sw) {
				printf("��ݾ� >");
				scanf_s("%d", &money);
				if (money > balance) {
					printf("�ܾ��� �ʰ��߽��ϴ�. �ٽ� �Է����ּ���.\n");
				}

				else {
					balance -= money;
					
					printf("���� ó���Ǿ����ϴ�.\n�ܰ� : %d\n", balance);
					break;
				}
			}
		}
		else if (selNo == 3) {
			printf("�ܰ� >");
			printf("%d\n", balance);
		}
		else if (selNo == 4) {
			sw = false; //���� ���� 1->0���� ����
			//break;  // ����ġ ���� ������ ���� ���� 
		}
		else { 
			printf("�������� �ʴ� ����Դϴ�.\n"); 
		}
	
	
	}//while End
	printf("���α׷� ����");
	return 0;
}
