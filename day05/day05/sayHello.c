#include <stdio.h>

void sayHello(char name[]){
	printf("Hello~ %s", name);

}

void sayHello2(char* name) {
	printf("Hello~ %s", name);

}

int main() {

	sayHello("sunny\n");        //�迭 ȣ��
	sayHello2("hyunsoo\n");     // ������ ȣ��
	return 0;
}