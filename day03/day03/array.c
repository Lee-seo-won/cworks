#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//배열의 선언과 사용
	int arr[3]; //정수형 배열 arr에 3개의 메모리 공간 할당
	int i; //반복 횟수

	//자료 저장
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;

	//1개 출력
	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);

	//전체 출력
	for (i = 0; i < 3; i++) {
		printf("%3d", arr[i]);

	}
	
	return 0;
}
