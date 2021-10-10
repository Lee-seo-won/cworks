#include <stdio.h>
#define PI 3.1415 //PI를 이거로 쓰겠다. =이나 ; 같은 부호 붙이지 않음. 자료형도 들어가지 않음.
                   //매크로 상수(전처리) - 처리속도 빠름. 메모리 작을 때 사용. 클 때는 const 써도 됨.
#define MIN_NUM 1
#define MAX_NUM 100

int main() {
	int r = 5; 
	float area;

	area = PI * r * r;

	printf("원의 넓이 : %.2f\n", area);

	//MIN_NUM = 10; 상수이기 때문에 바꿀 수 없다.
	
	printf("최대값 : %d\n", MAX_NUM);
	printf("최소값 : %d\n", MIN_NUM);

	


	


	return 0;
}