// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX_VIDEO 100
#define MAX_CHAR 100

struct VideoInfo {
	char title[MAX_CHAR];
	int qty;
};

int main(void)
{
	int videoCount = 5, i;
	struct VideoInfo videoList[MAX_VIDEO] = { {"BeforSunrise", 1}, {"BeforSunset", 3}, {"BeforMidnight", 5}, {"Cassblance", 7}, {"EdgeOfTomorrow", 9} };

	char title[MAX_CHAR];
	int qty;
	int choice;

	printf("1(All Video ���), 2(����), 3(�˻�), 4(����): ");
	scanf("%d", &choice);

	while (choice != 4) {
		switch (choice) {
		case 1: 
			printf("Video ����\t ����\n");
			printf("-----------------------\n");

			for (i = 0; i < videoCount; i++) {
				printf("%s\t%d\n", videoList[i].title, videoList[i].qty);
			}

			break;
		case 2: 
			printf("Enter video ����: ");
			scanf("%s", title);
			printf("Enter video ����: ");
			scanf("%d", &qty);

			strcpy(videoList[videoCount].title, title);
			videoList[videoCount].qty = qty;
			videoCount++;

			break;
		case 3: 
			printf("Enter video ����: ");
			scanf("%s", title);
			break;
		}
		printf("1(All Video ���), 2(����), 3(�˻�), 4(����): ");
		scanf("%d", &choice);
	}
}