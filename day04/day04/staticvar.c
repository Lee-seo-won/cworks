#include <stdio.h>

void count() {
	int x = 0; //지역변수 
	static int y = 0; //정적(고정)변수 (static 키워드 사용)
	x += 1;
	y += 1;
	printf("x = %d, y = %d\n", x, y);
}

int main() {

	count(); //x 계산 후 소멸 (해제 _ 지역변수), y 는 소멸되지 않고 유지됨 (static_정적변수)
	count();
	count();
	count();


	return 0;
}


