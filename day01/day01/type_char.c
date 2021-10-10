#include <stdio.h>

int main() {
	//문자 자료형


	char ch = 'a'; //문자형 변수 ch를 선언하고 'a'를 저장
	printf("%c\n", ch);
	printf("%d\n", ch);   //아스키 코드값 97

	//자료형의 크기
	printf("char 형 = %dByte\n", sizeof(char));  //1byte

	ch = 98; // char 로 여러번 정의하면 오류남
	printf("%c\n", ch);  //b
	printf("%c\n", ch + 1);  //c
	printf("%d\n", ch); //98

	//영문 문자열과 한글은 배열로 표현
	char f[] = "banana"; //문자열은 대괄호, 쌍따옴표로 감싼다.  대괄호에는 글자개수+1 이상 or 적지 않음
	// 맨뒤 '\0', null 생략되어 있음.
	// f='b', f[] = "banana"

	char h[] = "가";
	char h2[] = "\uD55C"; //유니코드
	char h3[] = "\uAE00"; //유니코드

	printf("%s\n", f);
	printf("%s\n", h);  //가
	printf("%s\n", h2); //한
	printf("%s\n", h3); //글

	return 0;

}





