#include <stdio.h>

void sayHello(char name[]){
	printf("Hello~ %s", name);

}

void sayHello2(char* name) {
	printf("Hello~ %s", name);

}

int main() {

	sayHello("sunny\n");        //배열 호출
	sayHello2("hyunsoo\n");     // 포인터 호출
	return 0;
}