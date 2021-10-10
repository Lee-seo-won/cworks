#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	//if - else if - else
	//놀이공원 입장료 계산 - 미취학아동, 초등학생, 중.고등학생, 일반인
	int age = 25;
	int charge = 0;
		//나이별로 조건 처리
	if (age < 8) {
		charge = 1000;
		printf("미취학 아동입니다.\n");
			} 
	else if (age < 14) {
		charge = 2000;
		printf("초등학생입니다.\n");
			}
	else if (age < 20) {
		charge = 2500;
		printf("중.고등학생입니다.\n");
			}
	else {  //age >= 20 생략
		charge = 3000;
		printf("일반인입니다.\n");
		}
	printf("입장료는 %d원입니다.\n", charge);



	return 0;
}