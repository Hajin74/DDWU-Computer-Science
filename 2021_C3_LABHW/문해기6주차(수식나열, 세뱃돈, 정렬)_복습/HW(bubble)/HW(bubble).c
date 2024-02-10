#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Student {
	int id;
	int korean, english, math;
};

void bubbleSort(struct Student* sp, int n) {
	int i, j;
	struct Student temp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (sp[j].korean < sp[j + 1].korean) {
				temp = sp[j];
				sp[j] = sp[j + 1];
				sp[j + 1] = temp;
			}
		}
	}
}

void bubbleSort2(struct Student* sp, int n) {
	int i, j;
	struct Student temp;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (sp[j].id > sp[j + 1].id) {
				temp = sp[j];
				sp[j] = sp[j + 1];
				sp[j + 1] = temp;
			}
		}
	}
}

int main(void) {
	int i;
	int n;
	struct Student* slist;

	scanf("%d", &n);
	slist = (struct Student*)malloc(sizeof(struct Student) * n);

	srand(time(NULL));

	for (i = 0; i < n; i++) {
		slist[i].id = (i + 1);
		slist[i].korean = rand() % 101;
		slist[i].english = rand() % 101;
		slist[i].math = rand() % 101;
	}

	printf("학번\t국어\t영어\t수학\n");
	for (i = 0; i < n; i++) {
		printf("%d\t", slist[i].id);
		printf("%d\t", slist[i].korean);
		printf("%d\t", slist[i].english);
		printf("%d\n", slist[i].math);
	}

	bubbleSort(slist, n);

	printf("\n국어 성적 순\n");
	printf("학번\t국어\t영어\t수학\n");
	for (i = 0; i < n; i++) {
		printf("%d\t", slist[i].id);
		printf("%d\t", slist[i].korean);
		printf("%d\t", slist[i].english);
		printf("%d\n", slist[i].math);
	}

	bubbleSort2(slist, n);

	printf("\n아이디 순\n");
	printf("학번\t국어\t영어\t수학\n");
	for (i = 0; i < n; i++) {
		printf("%d\t", slist[i].id);
		printf("%d\t", slist[i].korean);
		printf("%d\t", slist[i].english);
		printf("%d\n", slist[i].math);
	}

	free(slist);
}