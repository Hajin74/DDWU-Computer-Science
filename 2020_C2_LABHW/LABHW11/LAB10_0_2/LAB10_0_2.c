// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	char name[20];
	int midterm;
	int final;
};

int main(void) {
	struct student aStudent;
	struct student* sp = &aStudent;
	char name[20];

	printf("Enter student name: ");
	scanf("%s", name);
	strcpy((*sp).name, name);

	printf("Enter midterm and final score: ");
	scanf("%d %d", &(*sp).midterm, &(*sp).final);

	printf("\n�̸�\t�߰�\t�б⸻\n");
	printf("%s\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final);
}