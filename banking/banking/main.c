#include <stdio.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//은행 업무 프로그램
	bool sw = true; //스위치변수 - 실행, 중단을 구분
	int balance = 0; //잔고
	while (sw) {
		int selNo;  // 선택 변수
		int money; //입출금 변수
		printf("====================================\n");
		printf("1. 예금 | 2. 출금 | 3. 잔고 | 4, 종료\n");
		printf("====================================\n");
		printf("선택 >");
		scanf_s("%d", &selNo);

		//업무 처리
		//예금 
		if (selNo == 1) {
			printf("예금액 >");
			scanf_s("%d", &money);
			balance += money;
			printf("잔고 : %d\n", balance);
		}
		else if (selNo == 2) {
			printf("출금액 >");
			scanf_s("%d", &money);
			//balance -= money; // 잔고가 마이너스가 되지 않도록 (잔액이 부족합니다)
			/*while (money > balance) {
				printf("잔액을 초과했습니다. 다시 입력해주세요.\n");
				printf("출금액 >");
				scanf_s("%d", &money);
			}*/
			while (sw) {
				printf("출금액 >");
				scanf_s("%d", &money);
				if (money > balance) {
					printf("잔액을 초과했습니다. 다시 입력해주세요.\n");
				}

				else {
					balance -= money;

					printf("정상 처리되었습니다.\n잔고 : %d\n", balance);
					break;
				}
			}
		}
		else if (selNo == 3) {
			printf("잔고 >");
			printf("%d\n", balance);
		}
		else if (selNo == 4) {
			sw = false; //종료 변수 1->0으로 변경
			//break;  // 스위치 변수 있으면 생략 가능 
		}
		else {
			printf("지원되지 않는 기능입니다.\n");
		}


	}//while End
	printf("프로그램 종료");
	system("pause");

	return 0;
}
