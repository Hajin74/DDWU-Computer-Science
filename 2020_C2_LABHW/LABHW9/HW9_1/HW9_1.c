// 20200988 ��ǻ���а� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[50]; // �ԷµǴ� ���ڿ��� ����
	char alphaString1[50]; // �Է¹��ڿ����� ���ĺ��� ����
	char alphaString2[50]; // ��ҹ��ڸ� �ٲ�
	char digitString[50];
	char convertedString[50]; // ���ڵ�� ���ڵ�� ��迭�� ���ڿ�
	int i, j = 0;

	printf("���ڿ��� �Է��ϼ���:");
	fgets(string, sizeof(string), stdin);

	for (i = 0; i < strlen(string); i++) {
		if (isalpha(string[i])) {
			alphaString1[j++] = string[i];
		}
	}
	alphaString1[j] = '\0';
	printf("���ڵ��� %s\n", alphaString1);

	j = 0;
	for (i = 0; i < strlen(string); i++) {
		if (isdigit(string[i])) {
			digitString[j++] = string[i];
		}
	}
	digitString[j] = '\0';
	printf("���ڵ��� %s\n", digitString);

	j = 0;
	for (i = 0; i < strlen(alphaString1); i++) {
		if (isupper(alphaString1[i])) {
			alphaString2[j++] = tolower(alphaString1[i]);
		}
		else if (islower(alphaString1[i])) {
			alphaString2[j++] = toupper(alphaString1[i]);
		}
	}
	alphaString2[j] = '\0';
	printf("��ҹ��ڸ� �ٲ� ���ڵ��� %s\n", alphaString2);
	
	strcpy(convertedString, alphaString1);
	strcat(convertedString, digitString);
	printf("���ڵ�� ���ڵ�� ��迭�� ���ڿ��� %s\n", convertedString);
}