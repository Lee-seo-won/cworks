#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//ÁßÃ¸ for
	/*
	1 2 3 4 5
	6 7 8 9 10
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25
	*/
	int i, j, num;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			num = (i * 5) + j + 1;
			printf("%4d",num);
		}
		printf("\n");
	}
	return 0;
}
