// 20200988 컴과 유하진
#include <stdio.h>
int scoreReading(void);
char gradeDecision(int s1, int s2);

int main(void)
{
	int score1, score2;

	score1 = scoreReading();
	score2 = scoreReading();

	printf("Grade is %c!\n", gradeDecision(score1, score2));

	return 0;
}

int scoreReading(void)
{
	int s;

	printf("Enter a score : ");
	scanf_s("%d", &s);

	return s;
}

char gradeDecision(int s1, int s2)
{
	int average = (s1 + s2) / 2;
	char grade;

	if (average >= 80)
		grade = 'A';
	else if (average >= 50)
		grade = 'B';
	else
		grade = 'F';

	return grade;
}