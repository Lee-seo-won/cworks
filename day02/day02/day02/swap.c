
#include <stdio.h>

int main() {

	//변수값 교환하기
	int blue = 1;
	int red = 2;
	int yellow;
	printf("==== 교환 전 ====\n");
	printf("blue=%d, red=%d\n", blue, red);


	//교환 처리 blue를 yellow에, red를 blue에, yellow를 red에 넣는다.

	yellow = blue;
	blue = red;
	red = yellow;

	printf("==== 교환 후 ====\n");
	printf("blue=%d, red=%d\n", blue, red);

	return 0;
}
