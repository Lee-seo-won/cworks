#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//1부터 n까지 출력 - 무한반복문(반복조건문)
	//while ~ if ~ break문
	//1부터 더했을 때 그 합이 100이 넘는 자연수
	int n = 0;
	int sum = 0;
	while (1) {
		n++;
		sum += n;
		printf("n = %d,sum = %d\n", n, sum);
		if (sum > 100) //실행문이 한줄일 경우 {} 생략가능
			break;  //한줄일때는 중괄호 {} 없어도 됨.
	}
	printf("결과 n= %d, sum = %d",n, sum);
	return 0;
}
