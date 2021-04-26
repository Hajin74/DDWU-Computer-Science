#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Student {
	int id;
	int korean, english, math;
};

void selectionSort(struct Student *sp, int n) {
	int i, j;
	struct Student temp;
	int max;

	for (i = 0; i < n - 1; i++) {
		max = i;
		for (j = i; j < n; j++) {
			if (sp[j].korean > sp[max].korean)
				max = j;
		}
		temp = sp[i];
		sp[i] = sp[max];
		sp[max] = temp;
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

	selectionSort(slist, n);

	printf("\n국어 성적 순\n");
	printf("학번\t국어\t영어\t수학\n");
	for (i = 0; i < n; i++) {
		printf("%d\t", slist[i].id);
		printf("%d\t", slist[i].korean);
		printf("%d\t", slist[i].english);
		printf("%d\n", slist[i].math);
	}

	free(slist);
}