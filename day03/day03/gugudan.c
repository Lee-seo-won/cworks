#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//구구단 한 단만 출력하기
	
	int dan;
	
	int i,j;


	/*printf("단을 입력하세요 : ");
	scanf_s("%d", &dan);
	for (i = 1; i < 10; i++) {
		printf("%d X %d = %d\n", dan, i, (dan * i));
	}*/


	for (i = 2; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, (i * j));
		}
		printf("\n");
	}


	return 0;
}
