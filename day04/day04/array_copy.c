#include <stdio.h>

int main() {
	//�迭�� ����
	char a1[] = "TEN";  //���� null ���� - ���� 4��
	char a2[4];  //a1�� ����
	int i;

	//a1�� a2�� ����

	for (i = 0; i < 4; i++) {
		a2[i] = a1[i];
	}
	
	//���
	printf("%s\n", a2);
	printf("%s\n", a1);

	//a1�� a2�� �Ųٷ� ����(����)
	for (i = 0; i < 4; i++) {
		a2[i] = a1[2-i];
	}
	a2[3] = '\0';
	//a2[0] = a1[2] 'N'
    //a2[1] = a1[1] 'E'
	//a2[2] = a1[0] 'T'
	printf("%s\n", a2);

	return 0;
}
