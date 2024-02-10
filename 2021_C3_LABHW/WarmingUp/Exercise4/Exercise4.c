// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>

int main(void) {
	int nums[5];
	int i;
	int key;
	int flag = 0;

	printf("Enter 5개의 정수:");
	for (i = 0; i < 5; i++) {
		scanf(" %d", &nums[i]);
	}
	printf("Enter a key: ");
	scanf("%d", &key);

	for (i = 0; i < 5; i++) {
		if (nums[i] == key) { // key값을 발견하면 반복문 종료
			flag = 1;
			break;
		}
	}

	if (flag == 1) // key값이 있을경우 출력
		printf("%d번째에 있다\n", i + 1);
	else // key를 못찾아 flag == 0이면 출력
		printf("없다\n");
}