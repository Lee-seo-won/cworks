#include <stdio.h>
#include <time.h>
#include <Windows.h>
int main() {
	long t, start, end;
	t = time(NULL);
	int i;
	//time_t t = time (NULL); time_t 시간 자료형
	//long t = time(NULL);
	printf("%ld초\n", t); //1634441637초, 1970. 1. 1 자정 ~ 현재 시간(초단위)


	//1부터 10까지 출력 (대기 시간을 도입) - 수행 시간 측정
	//Sleep(1000) -> 1초 <Windows.h> include
	start = time(NULL);
	for (i = 1; i <= 100; i++) {
		printf("%d\n", i);
		Sleep(50); //0.05초
	}
	end = time(NULL);
	
	//double diff_timer = difftime(end, start);
	double diff_timer = (double)(end - start);
	printf("수행시간 : %lf초\n", diff_timer);

	return 0;
}


