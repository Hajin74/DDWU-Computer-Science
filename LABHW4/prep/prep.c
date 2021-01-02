// 20200988 컴퓨터학과 유하진
#include <stdio.h>
#define MAX_SET_SIZE 10
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0

// set 에 element 가 있으면 1 을 없으면 0 을 반환한다
int hasElement(int set[], int size, int element)
{
	int i;

	for (i = 0; i < size; i++)
		if (set[i] == element)
			return HAVE_ELEMENT; // we found it!

	return DO_NOT_HAVE_ELEMENT;
}

void printSet(int set[], int size)
{
	int i;

	printf("{");
	for (i = 0; i < size - 1; i++)
		printf(" %d,", set[i]);
	printf(" %d }\n", set[i]);
}

// set1 과 set2 가 같으면 1 을 다르면 0 을 반환
int isSetEqual(int set1[], int size1, int set2[], int size2)
{
	int i, flag;

	for (i = 0; i < size2; i++)
	{
		flag = hasElement(set1, size1, set2[i]);
		if (flag == 0)
			return DO_NOT_HAVE_ELEMENT;
	}

	return HAVE_ELEMENT;
}

// 원소가 집합에 존재하지 않으면 추가, 이미 존재하면 redundant 라고 출력하고 현재 집합 크기를 반환
int addOneElement(int set[], int size, int element)
{
	if (hasElement(set, size, element))
		printf("It is rebundant. Please retry.\n");
	else
		set[size++] = element;
		
	return size;
}

int main(void)
{
	int setA[MAX_SET_SIZE] = { 1, 2, 3 };
	int setB[MAX_SET_SIZE] = { 3, 2, 1, 4 };
	int num;
	int sizeA = 3, sizeB = 4;

	printf("A: "); 
	printSet(setA, sizeA);
	printf("B: "); 
	printSet(setB, sizeB);

	
	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("집한 A 와 B 는 같다\n");
	else
		printf("집한 A 와 B 는 다르다\n\n");

	
	printf("A 에 3 을 추가하면\n");
	sizeA = addOneElement(setA, sizeA, 3); // 3 을 SetA 에 추가한다
	printf("집합 A:"); 
	printSet(setA, sizeA);

	
	printf("A 에 4 를 추가하면\n");
	sizeA = addOneElement(setA, sizeA, 4); // 4 를 SetA 에 추가한다
	printf("집합 A:"); 
	printSet(setA, sizeA);

	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("집한 A 와 B 는 같다\n");
	else
		printf("집한 A 와 B 는 다르다\n");
	
}

/*
#define MAX_SET_SIZE 10
#define HAVE_ELEMENT 1
#define DO_NOT_HAVE_ELEMENT 0
#include <stdio.h>

int hasElement(int set[], int size, int element)
{
	int i;
	for (i = 0; i < size; i++)
		if (set[i] == element)
			return HAVE_ELEMENT; // we found it!
	return DO_NOT_HAVE_ELEMENT;
}

void printSet(int set[], int size)
{
	int i;

	printf("{");
	for (i = 0; i < size - 1; i++) {
		printf(" %d,", set[i]);
	}
	printf(" %d }\n", set[i]);

}

int isSetEqual(int set1[], int size1, int set2[], int size2)
{
	int i, j;
	int flag = 0;

	if (size1 != size2)
		return 0;
	else {
		for (i = 0; i < size1; i++) {
			flag = 0;
			for (j = 0; j < size2; j++) {
				if (set1[i] == set2[j])
					flag = 1;
			}
		}

		return flag;
	}
}

int addOneElement(int set[], int size, int element)
{
	int i;

	for (i = 0; i < size; i++) {
		if (hasElement(set, size, element)) {
			printf("중복\n");
			return size;
		}
		else {
			set[size++] = element;
			return size;
		}
	}
}


int main(void)
{
	int setA[MAX_SET_SIZE] = { 1, 2, 3, 5};
	int setB[MAX_SET_SIZE] = { 3, 2, 1, 4 };
	int num;
	int sizeA = 4, sizeB = 4;

	printf("A:");
	printSet(setA, sizeA);
	printf("B:");
	printSet(setB, sizeB);

	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("집한 A 와 B 는 같다\n");
	else
		printf("집한 A 와 B 는 다르다\n\n");

	printf("A 에 3 을 추가하면\n");
	sizeA = addOneElement(setA, sizeA, 3); // 3 을 SetA 에 추가한다
	printf("집합 A:");
	printSet(setA, sizeA);

	printf("A 에 4 를 추가하면\n");
	sizeA = addOneElement(setA, sizeA, 4); // 4 를 SetA 에 추가한다
	printf("집합 A:");
	printSet(setA, sizeA);

	if (isSetEqual(setA, sizeA, setB, sizeB))
		printf("집한 A 와 B 는 같다\n");
	else
		printf("집한 A 와 B 는 다르다\n");

}
*/