#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct HW {
	int correct;
	int index;
};

void sort(struct HW *hw, int hwN) {
	int i, j, smallest;
	struct HW temp;

	for (i = 0; i < hwN; i++) {
		smallest = i;
		for (j = i; j < hwN; j++) {
			if (hw[j].correct < hw[smallest].correct) {
				smallest = j;
			}
		}
		temp = hw[i];
		hw[i] = hw[smallest];
		hw[smallest] = temp;
	}
}

int main(void) {
	int i, j, q, stu;
	char* score;
	struct HW* hw;

	scanf("%d %d", &q, &stu);
	hw = (struct HW*)malloc(sizeof(struct HW) * q);
	score = (char*)malloc(sizeof(char) * (q + 1));
	

	for (i = 0; i < q; i++) {
		hw[i].index = (i + 1);
		hw[i].correct = 0;
	}

	for (i = 0; i < stu; i++) {
		scanf("%s", score);

		for (j = 0; j < q; j++) {
			if (score[j] == '1')
				(hw[j].correct)++;
		}

	}

	/*
	for (i = 0; i < q; i++) {
		printf("%d ", hw[i].correct);
	}
	printf("\n");
	*/

	sort(hw, q);

	for (i = 0; i < q; i++) {
		printf("%d ", hw[i].correct);
	}
	printf("\n");
	
	free(score);
	free(hw);
}