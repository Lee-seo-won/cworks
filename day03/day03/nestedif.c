#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    //내부 if문
	//조건 수가 10이상 짝수인 경우
	//조건 수가 10이상 홀수인 경우
	//수가 10보다 작고 짝수인 경우
	//수가 10보다 작고 홀수인 경우
	//int num = 11;
	
	//if~else if ~else
	int num;
	printf("수를 입력하세요 :");
	scanf_s("%d",&num);
	
	if (num >= 10 && num % 2 ==0) {
		printf("%d는 10 이상의 짝수\n", num);
	}
	else if (num >= 10 && num % 2 != 0) {
		printf("%d는 10 이상의 홀수\n", num);
	}
	else if (num < 10 && num % 2 == 0) {
		printf("%d는 10보다 작은 짝수\n", num);
	}
	else {
		printf("%d는 10보다 작은 홀수\n", num);
	}

	


	/*if (num >= 10) {
		if (num % 2 == 0) {
			printf("%d는 10 이상의 짝수\n", num);
		}
		else {
			printf("%d는 10 이상의 홀수\n", num);
		}
	}
	else {
		if (num % 2 == 0) {
			printf("%d는 10보다 작은 짝수\n", num);
		}
		else {
			printf("%d는 10보다 작은 홀수\n", num);
		}
	}*/


	return 0;
}