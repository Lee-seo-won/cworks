#include <stdio.h>

int main() {
	//문자 배열 선언과 사용
	char alphabet[26];
	char ch = 'A';
	int i;

	/*A를 출력
	printf("%c, %d\n", ch, ch);
	printf("%c, %d\n", ch +1, ch+1);*/

	//배열에 저장
	for (i = 0; i < 26; i++) {
		alphabet[i] = ch;
		
		printf("%3c", ch);
		printf("%3d", ch);
		ch++;
	}
	return 0;
}