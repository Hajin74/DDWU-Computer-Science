// 컴퓨터학과 20200988 유하진
#include <stdio.h>

int checking(char w0[], char w[]) {
	int i, length;

	for (i = 0; w[i] != '\0'; i++);
	length = i;

	if (length < 5)
		return 0;
	else {
		for (i = 0; i < 5; i++) {
			if (w0[i] != w[i])
				return 0;
		}
	}
	
	return 1;
}

int main(void) {
	char w0[81] = "apple";
	char w1[81], w2[81], w3[81];

	scanf_s("%s %s %s", w1, 81, w2, 81, w3, 81);
	printf("%d", checking(w0, w1));
	printf("%d", checking(w0, w2));
	printf("%d", checking(w0, w3));	
}
