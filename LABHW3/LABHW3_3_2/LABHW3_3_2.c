// 컴퓨터학과 20200988 유하진
#define SIZE 10
#include <stdio.h>
char askReservation();
void printSeats(int s[], int size);
void processReservation(int s[], int size, int seatNumber, int possibleSeats);

int main(void)
{
	int count;
	int seats[SIZE] = { 0 };
	int possibleSeats = 0;

	printf("******좌석 예약 시스템******\n");
	printSeats(seats, SIZE);

	while (possibleSeats < 10)
	{
		
		count = askReservation();
		processReservation(seats, SIZE, count, possibleSeats);
		possibleSeats += count;

		while (getchar() != '\n'); // 버퍼 비움
	}
}

char askReservation()
{
	int pplNum;

	printf("\n좌석을 예약하시겠습니까?(몇 명) ");
	scanf_s("%d", &pplNum);

	return pplNum;
}

void processReservation(int s[], int size, int seatNumber, int possibleSeats) // 앞에서 부터 seatChoice 만큼 예약
{
	int i;
	
	for (i = possibleSeats; i < possibleSeats + seatNumber; i++)
		s[i] = 1;
	
	
	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");

	for(i = 0; i < size; i++)
		printf("%2d", s[i]);
	printf("\n");
}

void printSeats(int s[], int size)
{
	int i;

	printf("----------------------\n");
	printf(" 1 2 3 4 5 6 7 8 9 10\n");
	printf("----------------------\n");
	for (i = 0; i < size; i++)
		printf("%2d", s[i]);
	printf("\n");
}