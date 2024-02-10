#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Student {
	int id;
	int korean, english, math;
};

void selectionSort(struct Student *s, int n) {
	int i, j;
	int maxIndex;
	struct Student temp;

	for (i = 0; i < n - 1; i++) {
		maxIndex = i;
		for (j = i; j < n; j++) {
			if (s[j].korean > s[maxIndex].korean)
				maxIndex = j;
		}
		temp = s[i];
		s[i] = s[maxIndex];
		s[maxIndex] = temp;
	}

	return;
}

int main(void) {
	int i;
	int n;
	struct Student * sp;

	srand(time(NULL));

	scanf("%d", &n);

	sp = (struct Student*)malloc(sizeof(struct Student) * n);
	if (sp == NULL) {
		printf("�޸𸮸� �Ҵ��� �� �����ϴ�.");
		return;
	}

	for (i = 0; i < n; i++) {
		sp[i].id = (i + 1);
		sp[i].korean = rand() % 101;
		sp[i].english = rand() % 101;
		sp[i].math = rand() % 101;
	}

	printf("�й�\t����\t����\t����\n");
	for (i = 0; i < n; i++)
		printf("%d\t%d\t%d\t%d\n", sp[i].id, sp[i].korean, sp[i].english, sp[i].math);
	
	selectionSort(sp, n);

	printf("\n�й�\t����\t����\t����\n");
	for (i = 0; i < n; i++)
		printf("%d\t%d\t%d\t%d\n", sp[i].id, sp[i].korean, sp[i].english, sp[i].math);
}