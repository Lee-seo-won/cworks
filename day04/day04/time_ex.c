#include <stdio.h>
#include <time.h>
#include <Windows.h>
int main() {
	long t, start, end;
	t = time(NULL);
	int i;
	//time_t t = time (NULL); time_t �ð� �ڷ���
	//long t = time(NULL);
	printf("%ld��\n", t); //1634441637��, 1970. 1. 1 ���� ~ ���� �ð�(�ʴ���)


	//1���� 10���� ��� (��� �ð��� ����) - ���� �ð� ����
	//Sleep(1000) -> 1�� <Windows.h> include
	start = time(NULL);
	for (i = 1; i <= 100; i++) {
		printf("%d\n", i);
		Sleep(50); //0.05��
	}
	end = time(NULL);
	
	//double diff_timer = difftime(end, start);
	double diff_timer = (double)(end - start);
	printf("����ð� : %lf��\n", diff_timer);

	return 0;
}


