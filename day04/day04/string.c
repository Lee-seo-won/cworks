#include <stdio.h>

int main() {
	//문자열 배열 선언과 사용
	char fruit1[] = { 'a','p','p','l','e', '\0'};  //맨 끝 '\0' - null
	char fruit2[] = "apple";
	char name[20];
	printf("%s\n", fruit1);
	printf("%s\n", fruit2);
	
	//이름을 물어볼때 사용하기
	printf("당신의 이름은 무엇인가요?");
	scanf_s("%s", name, sizeof(name)); //배열에서 &(주소연산자)는 없음. sizeof(배열이름) 넣어줘야함
	//배열인 경우 scanf_s(서식문자, 배열, 배열의 크기)
	printf("당신의 이름은 %s이군요", name);


	return 0;
}