// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	FILE* fp;

	fp = fopen("hello.txt", "a");
	if (fp == NULL) {
		printf("���� ���� �����Դϴ�.\n");
		return 1;
	}

	fprintf(fp, "Hi\n");
	fprintf(fp, "Everybody\n");

	fclose(fp);
}