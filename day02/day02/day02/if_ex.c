#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	//단독 if문
	int age = 6;
	if (age < 8) { //참이면 1, 거짓이면0
		printf("학교에 가지 않습니다.\n");
	}
	printf("나이는 %d세입니다.\n",age);

	//if-else문
	int score = 70;
	if (score >= 60) {
		printf("합격입니다.\n");
	}
	else { //score <60 이 생략되어 있는 것.
		printf("불합격입니다.\n");
	}
	printf("점수는 %d점입니다.\n", score);
	
	//짝수 홀수를 판정하는 프로그램
	int num;
	printf("정수를 입력하세요 : ");
	scanf_s("%d", &num);
	
	if (num % 2 == 0) {
		printf("짝수입니다.\n");
	}
	else { //num % 2가 1인경우 생략
		printf("홀수입니다.\n");
	}
	
	
	return 0;
}