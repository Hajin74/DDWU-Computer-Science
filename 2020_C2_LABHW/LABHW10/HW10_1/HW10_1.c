// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct student {
	char name[20];
	int midterm;
	int final;
	int average;
	char grade;
};

int main(void) {
	int i, midAve = 0, fAve = 0;
	char name[20];
	struct student s[3];

	for (i = 0; i < 3; i++) {
		printf("Enter student name: ");
		scanf("%s", name);
		strcpy(&s[i].name, name);

		printf("Enter midterm and final score: ");
		scanf("%d %d", &s[i].midterm, &s[i].final);

		s[i].average = (s[i].midterm + s[i].final) / 2;

		if (s[i].average >= 80)
			s[i].grade = 'A';
		else if (s[i].average >= 50)
			s[i].grade = 'B';
		else
			s[i].grade = 'F';
	}

	printf("\n�̸�\t�߰�\t�б⸻\t���\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\t%d\n", s[i].name, s[i].midterm, s[i].final, s[i].average);
	}

	printf("\n�̸�\t����\n");
	for (i = 0; i < 3; i++) {
		printf("%s\t%c\n", s[i].name, s[i].grade);
	}

	for (i = 0; i < 3; i++) {
		midAve += s[i].midterm;
		fAve += s[i].final;
	}

	printf("\n�߰������ ��� = %d\n", midAve / 3);
	printf("�б⸻����� ��� = %d\n", fAve / 3);
}