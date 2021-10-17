#include <stdio.h>

int main() {
	int arr[] = { 10, 20, 30, 40 };
	int i;
	int sum = 0;
	//30을 출력
	printf("a[%d] = %d\n", 2, arr[2]);

	//전체 출력
	for (i = 0; i < 4; i++) {
		printf("%d\n", arr[i]);

	}
	//합계
	for (i = 0; i < 4; i++) {
		sum += arr[i];  //값을 더하기
		printf("합계 : %d\n", sum);

	}
	return 0;
}