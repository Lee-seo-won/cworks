/*#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int main() {

	FILE* fp;
	fopen_s(&fp, "hello.txt", "r"); //�б� ��� - "r", "rt" ���
	if (fp == NULL) {
		puts("������ �� �� �����ϴ�.");
		return -1;
	}
	
	int ch = 0;

	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}
	/*while (1) {
		int ch = fgetc(fp); //�� ���� ��������
		if (ch == -1) break; //EOF = -1
		putchar(ch);   //�� ���� ����ϱ�
		printf("c", ch);

	
	}
	fclose(fp);

	return 0;
}*/