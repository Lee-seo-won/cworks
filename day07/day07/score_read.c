/*#include <stdio.h>

int main() {

	FILE* fp;
	char name[20];
	int no, kor, eng, math;
	

	

	fopen_s(&fp, "file_scorelist.txt", "r");
	if (fp == NULL) {
		puts("������ �� �� �����ϴ�.\n");
		return -1;
	}
	//���� �б�
	fscanf_s(fp, "%s", name, sizeof(name));
	fscanf_s(fp, "%%s d %d %d", name, sizeof(name) &kor, &eng, &math);
	fprintf(stdout, "%s", name);
	fprintf(stdout, "%d %d %d\n",name, kor , eng, math); //����Ϳ� ����


	fclose(fp);
	return 0;
}*/