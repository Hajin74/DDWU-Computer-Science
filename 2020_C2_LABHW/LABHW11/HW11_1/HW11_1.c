// 20200988 컴퓨터학과 유하진
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
	struct student* sp = s;

	for (i = 0; i < 3; i++) {
		printf("Enter student name: ");
		scanf("%s", name);
		strcpy(sp->name, name);

		printf("Enter midterm and final score: ");
		scanf("%d %d", &sp->midterm, &sp->final);

		sp->average = (sp->midterm + sp->final) / 2;

		if (sp->average >= 80)
			sp->grade = 'A';
		else if (sp->average >= 50)
			sp->grade = 'B';
		else
			sp->grade = 'F';

		sp++;
	}

	printf("\n이름\t중간\t학기말\t평균\n");
	sp = s;
	for (i = 0; i < 3; i++) {
		printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average);
		sp++;
	}

	printf("\n이름\t학점\n");
	sp = s;
	for (i = 0; i < 3; i++) {
		printf("%s\t%c\n", sp->name, sp->grade);
		sp++;
	}

	sp = s;
	for (i = 0; i < 3; i++) {
		midAve += sp->midterm;
		fAve += sp->final;
		sp++;
	}

	printf("\n중간고사의 평균 = %d\n", midAve / 3);
	printf("학기말고사의 평균 = %d\n", fAve / 3);
}
