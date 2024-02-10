// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>

int lottoGenerator() {
	int lotto[6];
	int i;

	srand(time(NULL));

	printf("생성 번호: ");
	for (i = 0; i < 6; i++) {
		lotto[i] = rand() % 45 + 1;
		printf("%d ", lotto[i]);
	}
	printf("\n");
}

int main(void) {
	char answer;

	printf("*** 로또 번호 생성기 ***\n");

	do {
		lottoGenerator();
		printf("다시 생성하겠습니까? (y/n): \n");
		scanf(" %c", &answer); // 문자를 입력받을 때마다 enter키가 버퍼에 자동으로 적용되어서 다음 문자를 받을 때 자동으로 입력이 되어진다. 따라서 형식지정자 앞에 공백을 넣어서 엔터를 무시해준다.
	} while (answer == 'y');

}