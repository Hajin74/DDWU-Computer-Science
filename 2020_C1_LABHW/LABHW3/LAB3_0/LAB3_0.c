/*
LAB3_0 ������ 20200988 ��ǻ���а� 20�й�
*/

#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int result1, result2, result3;
/*
	printf("�� ���� ���� :  %d\n", x + y); //30
	
	x += 3;
	y *= 4;
	printf("result : %d %d\n", x, y); //13 80

	x = -x;
	printf("x=-x ���� ���� x�� %d\n", x); //-13

	x = 10;
	y = 10;
	printf("�� ���� �� ���� : %d\n", x++); //10
	printf("�ٽ� �ѹ� ��� : %d\n\n", x);
	printf("y : %d\n\n", ++y);
	printf("y : %d\n\n", y);
	*/
	
	x = 10;
	y = (x--) + 2;
	printf("x: %d\n", x);
	printf("y : %d\n", y);
	
	// ���迬����
	x = 10, y = 10;
	result1 = (x==y);
	result2 = (x<=y);
	result3 = (x>y);
	printf("result1 : %d\n", result1); 
	printf("result2 : %d\n", result2); 
	printf("result3 : %d\n", result3); 
	
	// ��������
	x = 10;
	y = 20;
	result1 = (x==10 && y == 10);
	result2 = (x==10 || y == 10);
	result3 = !(x==10);
	printf("result1 : %d\n", result1);
	printf("result2 : %d\n", result2); 
	printf("result3 : %d\n", result3); 

}
