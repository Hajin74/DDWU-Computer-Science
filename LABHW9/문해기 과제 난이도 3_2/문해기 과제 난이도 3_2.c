#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct Question {
	int correct;
	int index;
};

void sort(struct Question list[], int size) {
	struct Question temp;

	int i, j, smallest = 0;

	for (i = 0; i < size - 1; i++) {
		for (j = i; j < size; j++) {
			if (list[j].correct < list[smallest].correct)
				smallest = j;
		}
		temp = list[i];
		list[i] = list[smallest];
		list[smallest] = temp;
	}
}

int main(void) {
	int i, j, q, stu;
	char* score;
	struct Question* list;

	scanf("%d %d", &q, &stu);
	list = (struct Question*)malloc(sizeof(struct Question) * q);
	score = (char*)malloc(sizeof(char) * q);

	for (i = 0; i < q; i++) {
		list[i].index = (i + 1);
		list[i].correct = 0;
	}

	for (i = 0; i < stu; i++) {
		scanf("%s", score);

		for (j = 0; j < q; j++) {
			if (score[j] == '1')
				(list[j].correct)++;
		}
	}

	sort(list, q);

	for (i = 0; i < q; i++)
		printf("%d ", list[i].index);

	free(list);
	//free(score);
}