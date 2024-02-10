// 20200988 컴퓨터학과 유하진
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct customer {
	char name[40];
	int age;
};

int main(void) {
	int i;
	struct customer aCustomer = { "박수희", 36 };
	struct customer cArray[2] = { {"장동건", 38}, {"고소영", 38} };
	struct customer* cp = &aCustomer;

	printf("Name = %s, Age = %d\n", cp -> name, cp -> age);;

	cp = cArray;
	for (i = 0; i < 2; i++) {
		printf("Name = %s, Age = %d\n", cp -> name, cp -> age);
		cp++;
	}
}