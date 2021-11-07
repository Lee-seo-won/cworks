/*#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>

int main() {

	FILE* fp;
	fopen_s(&fp, "hello.txt", "r"); //읽기 모드 - "r", "rt" 사용
	if (fp == NULL) {
		puts("파일을 열 수 없습니다.");
		return -1;
	}
	
	int ch = 0;

	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}
	/*while (1) {
		int ch = fgetc(fp); //한 문자 가져오기
		if (ch == -1) break; //EOF = -1
		putchar(ch);   //한 문자 출력하기
		printf("c", ch);

	
	}
	fclose(fp);

	return 0;
}*/