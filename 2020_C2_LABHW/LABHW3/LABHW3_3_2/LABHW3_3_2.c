// ��ǻ���а� 20200988 ������
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

	printf("******�¼� ���� �ý���******\n");
	printSeats(seats, SIZE);

	while (possibleSeats < 10)
	{
		
		count = askReservation();
		processReservation(seats, SIZE, count, possibleSeats);
		possibleSeats += count;

		while (getchar() != '\n'); // ���� ���
	}
}

char askReservation()
{
	int pplNum;

	printf("\n�¼��� �����Ͻðڽ��ϱ�?(�� ��) ");
	scanf_s("%d", &pplNum);

	return pplNum;
}

void processReservation(int s[], int size, int seatNumber, int possibleSeats) // �տ��� ���� seatChoice ��ŭ ����
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