#include <stdio.h>

int main() {
	//���� �迭 ����� ���
	char alphabet[26];
	char ch = 'A';
	int i;

	/*A�� ���
	printf("%c, %d\n", ch, ch);
	printf("%c, %d\n", ch +1, ch+1);*/

	//�迭�� ����
	for (i = 0; i < 26; i++) {
		alphabet[i] = ch;
		
		printf("%3c", ch);
		printf("%3d", ch);
		ch++;
	}
	return 0;
}