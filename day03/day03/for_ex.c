#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//반복문 - for문
	int n;
	int total = 0; //합계
	for (n = 1; n <= 10; n++) { //초기값; 조건값; 증감값;
		total += n;
		//printf("%4d", n); //%4d에서 숫자는 여백

	}
	printf("합계 : %d", total);
	return 0;
}
