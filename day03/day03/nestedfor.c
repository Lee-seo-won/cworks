#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//중첩 for문
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("가");
		}
		printf("\n"); //다음행 줄바꿈
	}

	//1행(i=0) - 가, 가, 가, 가, 가
	//2행(i=1) - 가, 가, 가, 가, 가
	//3행(i=2) - 가, 가, 가, 가, 가
	//4행(i=3) - 가, 가, 가, 가, 가
	//5행(i=4) - 가, 가, 가, 가, 가
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("*");
		}
		printf("\n"); //다음행 줄바꿈
	}

	//직각 삼각형 모양의 별찍기
	/*
	1행(i=0) - *
	2행(i=1) - **
	***
	****
	*****
	*/

	for (i = 0; i < 5; i++) {
		for (j = 0; j < i+1 ; j++) {
			printf("*");
		}
		printf("\n"); //다음행 줄바꿈
	}
	
	return 0;
}
