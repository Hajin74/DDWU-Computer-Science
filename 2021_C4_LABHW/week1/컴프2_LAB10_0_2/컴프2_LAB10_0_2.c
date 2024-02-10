#pragma warning(disable : 6031)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

struct student {
	char name[20];
	int mid;
	int final;
};

int main(void) {
	struct student aStudent;
	struct student* sp = &aStudent;

	printf("Enter studnet name: ");
	scanf("%s", sp->name);
	printf("Enter mid and finel score: ");
	scanf("%d %d", &sp->mid, &sp->final);

	printf("%s\t%d\t%d\n", sp->name, sp->mid, sp->final);

	printf("%d\n", sizeof(aStudent));
}