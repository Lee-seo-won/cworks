#include <stdio.h>


//typedef·Î ±¸Á¶Ã¼ ÀçÁ¤ÀÇ
typedef struct _Three_D { 
	int x, y, z;
} Three_D;

int main() {
	Three_D d3;
	Three_D d4;

	d3.x = 100;
	d3.y = 200;
	d3.z = 300;

	//±¸Á¶Ã¼ °´Ã¼ º¹»ç
	d4 = d3;  //d3À» d4¿¡ ÀúÀå
	printf("xÁÂÇ¥ : %d, yÁÂÇ¥ : %d, zÁÂÇ¥ : %d\n", d3.x, d3.y, d3.z);
	printf("xÁÂÇ¥ : %d, yÁÂÇ¥ : %d, zÁÂÇ¥ : %d\n", d4.x, d4.y, d4.z);


	return 0;
}