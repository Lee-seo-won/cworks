#include <stdio.h>

int main() {
	//자동 형변환
	int iNum = 20;
	float fNum = iNum; //큰 자료형 = 작은 자료형

	printf("%f\n", fNum);

	//강제 형변환 : 작은자료형 = (작은 자료형)큰 자료형
	double dNum = 2.54;
	int iNum2 = (int)dNum;
	printf("%d\n", iNum2);

	//연산 
	dNum = 1.2;
	fNum = 0.9;

	iNum = (int)dNum + (int)fNum; //정수만 덧셈
	printf("%d\n", iNum);  //1

	iNum = (int)(dNum + fNum);   //더한 후 정수 추출
	printf("%d\n", iNum); //2

	//사칙연산(+ - * /)
	int n1 = 10, n2 = 4; //변수 중복 선언 콤마 사용
	int result;
	double result2;
	result = n1 + n2;
	printf("%d\n", result); //14

	result = n1 - n2;
	printf("%d\n", result);  //6

	result = n1 * n2;
	printf("%d\n", result);  //40

	result2 = (double)n1 / n2;  //2.5
	printf("%.1lf\n", result2);   //실수로 만들어주기 위해 double, lf 사용. 강제로 큰자료형으로 맞춰줌.

	return 0;
}
