#include <stdio.h>

int main() {
	//상수 - const
	int min_num = 1;
	const int MAX_NUM = 100;
	const float PI = 3.1415; //상수 PI를 선언 + PI에 3.1415를 저장함
	int radius = 5; //변수 radius에 5를 저장
	float area; // 원넓이 area 선언

	min_num = 10;
	//max_num = 1000; 수정할수 있는 lvalue(left_value)가 아님 - const가 붙어서 상수라 수정이 안됨.
	//관행적으로 상수는 대문자, 변수는 소문자
	printf("%d\n", min_num);
	printf("%d\n", MAX_NUM);

	//원의 넓이 계산하기 : PI * r * r

	area = PI * radius * radius;
	printf("원의 넓이 : %.2f\n", area);


	return 0;
}